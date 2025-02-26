#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visited[1010];
int level[1010];
int parent[1010];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int val : v[par])
        {
            if (visited[val] == false)
            {
                q.push(val);
                visited[val] = true;
                level[val] = level[par] + 1;
                parent[val] = par;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, des;
    cin >> src >> des;
    bfs(src);
    int x = des;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    for (int val : path)
    {
        cout << val << " ";
    }
    

    return 0;
}