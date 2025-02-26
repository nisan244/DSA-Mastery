#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool visi[20][20];
int level[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

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
    level[si][sj] = 0;
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
            if (valid(ci, cj) && visi[ci][cj] == false)
            {
                q.push({ci, cj});
                visi[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
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

    memset(visi, false, sizeof(visi));
    memset(level, -1, sizeof(level));
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);

    cout << level[0][4];

    
    return 0;
}