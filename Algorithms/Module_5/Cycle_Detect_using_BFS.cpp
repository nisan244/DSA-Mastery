// 5-2 Detect Cycle in Undirected Graph using BFS

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
bool result;
int parent_arr[N];
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
        cout << parent << endl;
        for (int child : adj[parent])
        {
            if (vis[child] == true && parent_arr[parent] != child)
            {
                result = true;
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
    result = false;
    memset(vis, false, sizeof(vis));
    memset(parent_arr, -1, sizeof(parent_arr));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            BFS(i);
        }
    }

    if (result == true)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "Cycle Not Detected" << endl;
    }

    return 0;
}
