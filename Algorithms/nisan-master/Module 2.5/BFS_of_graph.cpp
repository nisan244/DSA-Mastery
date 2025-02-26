#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> v;
        bool visited[V];
        memset(visited, false, sizeof(visited));
        queue<int> q;
        q.push(0);
        visited[0] = true;
        while (!q.empty())
        {
            int p = q.front();
            q.pop();
            v.push_back(p);
            for (int val : adj[p])
            {
                if (visited[val] == false)
                {
                    q.push(val);
                    visited[val] = true;
                }
            }
        }
        return v;
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}