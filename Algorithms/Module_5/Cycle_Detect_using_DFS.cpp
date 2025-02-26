// 5 - 3 Detect Cycle in Undirected Graph using DFS

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
bool result;
int parent_arr[N];
vector<int> adj[N];

void DFS(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    for (int child : adj[parent])
    {
        if (vis[child] == true && parent_arr[parent] != child)
        {
            result = true;
        }
        if (vis[child] == false)
        {
            parent_arr[child] = parent;
            DFS(child);
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
            DFS(i);
        }
    }

    // Parent dekhar jonnno ----------
    // for (int i = 0; i < n; i++)
    // {
    //     cout << parent_arr[i] << " ";
    // }

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
