#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> v[N];
bool vis[N];
int dis[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
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
                dis[child] = dis[par] + 1;
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
    memset(dis, -1, sizeof(dis));
    int src, d, k;
    cin >> src >> d >> k;
    bfs(src);

    if (dis[d] != -1 && dis[d] <= k * 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*

INPUT:
8 9
0 1
4 0
4 2
2 3
1 3
2 5
5 6
6 7
6 3
4 7
2

OUTPUT:
YES

*/