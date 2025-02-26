// 14 - 7 Message Routes

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> v[N];
bool vis[N];
int parent[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                parent[child] = par;
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
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(1);

    int x = n;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());

    if (path.size() == 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << path.size() << endl;
        for (int val : path)
        {
            cout << val << " ";
        }
    }

    return 0;
}

/*

INPUT:
5 5
1 2
1 3
1 4
2 3
5 4

OUTPUT:
3
1 4 5

----------------------

INPUT:
4 2
1 2
3 4

OUTPUT:
IMPOSSIBLE

---------------------

INPUT:
4 3
1 2
2 3
3 4

OUTPUT:
4
1 2 3 4

*/