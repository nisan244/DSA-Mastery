#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;   // 10^3 + 10
char a[N][N];
bool visi[N][N];

bool valid(int si, int sj)
{
    if (a[si][sj] == '.')
    {
        return true;
    }
    return false;
}
void dfs(int si, int sj)
{
    visi[si][sj] = true;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) == true && visi[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    memset(visi, false, sizeof(visi));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && visi[i][j] == false)
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    

    return 0;
}