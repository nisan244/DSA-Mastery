#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[110][110];
int dis[110][110];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void BFS(int ki, int kj, int qi, int qj)
{
    queue<pair<int, int>> qu;
    vector<pair<int, int>> d = {{1, 2}, {2, 1}, {1, -2}, {2, -1}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}};
    qu.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;
    while (!qu.empty())
    {
        pair<int, int> p = qu.front();
        qu.pop();
        int ci = p.first;
        int cj = p.second;
        for (int h = 0; h < 8; h++)
        {
            int ni = ci + d[h].first;
            int nj = cj + d[h].second;
            if (valid(ni, nj) && vis[ni][nj] == false)
            {
                qu.push({ni, nj});
                vis[ni][nj] = true;
                dis[ni][nj] = dis[ci][cj] + 1;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n][m];
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        BFS(ki, kj, qi, qj);
        if (dis[qi][qj] != -1)
        {
            cout << dis[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

// DONE
// Accepetd