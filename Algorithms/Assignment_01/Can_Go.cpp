#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;   // 10^3 + 10
char a[N][N];
bool visi[N][N];
int n, m;
bool item = false;

bool valid(int i, int j)
{
    if (a[i][j] == 'B' || a[i][j] == '.')
    {
        return true;
    }
    return false;
}
void dfs(int si, int sj)
{
    visi[si][sj] = true;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    if (a[si][sj] == 'B')
    {
        item = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && visi[ci][cj] == false)
        {
            dfs(ci, cj);
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A' && visi[i][j] == false)
            {
                dfs(i, j);
            }
        }
    }
    if (item == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    
    return 0;
}

