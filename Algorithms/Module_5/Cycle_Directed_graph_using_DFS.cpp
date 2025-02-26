// 5-5 Detect Cycle in Directed Graph using DFS

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
bool result;
bool path_Visit[N];
vector<int> adj[N];

void DFS(int parent)
{
    vis[parent] == true;
    path_Visit[parent] = true;
    for (int child : adj[parent])
    {
        if (path_Visit[child] == true)
        {
            result = true;
        }
        if (vis[child] == false)
        {
            DFS(child);
        }
    }
    // kaj ses
    path_Visit[parent] = false;
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
        // adj[b].push_back(a);
    }
    result = false;
    memset(vis, false, sizeof(vis));
    memset(path_Visit, false, sizeof(path_Visit));
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            DFS(i);
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
