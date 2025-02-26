#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct edge
{
    int to, time;
};

void addEdge(vector<edge> adj[], int u, int v, int time)
{
    adj[u].push_back({v, time});
    adj[v].push_back({u, time});
}

bool dfs(vector<edge> adj[], int start, int key, int trap, int dp[], int domeTrapDist)
{
    dp[start] = 0;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        if (node == key)
        {
            dp[node] = domeTrapDist;
            return true;
        }
        if (node == trap)
        {
            dp[node] = domeTrapDist;
            return false;
        }
        for (auto &edge : adj[node])
        {
            if (dp[edge.to] == -1)
            {
                dp[edge.to] = dp[node] + edge.time;
                q.push(edge.to);
            }
        }
    }
    return false;
}

void solve()
{
    int n, g;
    cin >> n >> g;
    vector<edge> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, time;
        cin >> u >> v >> time;
        addEdge(adj, u, v, time);
    }
    while (g--)
    {
        int start, key, trap;
        cin >> start >> key >> trap;
        int dp[n + 1];
        fill(dp, dp + n + 1, -1);
        bool reachable = dfs(adj, start, key, trap, dp, n + 1);
        if (!reachable)
        {
            cout << "impossible" << endl;
            continue;
        }
        int maxTime = *max_element(dp + 1, dp + n + 1);
        cout << maxTime << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}