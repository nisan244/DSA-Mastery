#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
int parent_arr[N];
int cunt = 0;
vector<int> adj[N];

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj[parent])
        {
            if (vis[child] == true && parent_arr[parent] != child)
            {
                cunt++;
            }
            if (vis[child] == false)
            {

                vis[child] = true;
                parent_arr[child] = parent;
                q.push(child);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent_arr, -1, sizeof(parent_arr));

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            BFS(i);
        }
    }

    cout << (cunt / 2) << endl;
    return 0;
}


// DONE
// Accepted