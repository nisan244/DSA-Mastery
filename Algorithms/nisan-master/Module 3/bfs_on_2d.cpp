#include <bits/stdc++.h>
using namespace std;
bool visi[20][20];
int dis[20][20];
char a[20][20];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visi[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int a = p.first, b = p.second;
        // cout << a << " " << b << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && visi[ci][cj] == false)
            {
                q.push({ci, cj});
                visi[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(visi, false, sizeof(visi));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);

    cout << dis[2][2];

    
    return 0;
}