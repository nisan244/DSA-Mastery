#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;   // 10^3 + 10
char a[N][N];
bool visi[N][N];
vector<int> v;

bool valid(int si, int sj)
{
    if (a[si][sj] == '.')
    {
        return true;
    }
    return false;
}

int dfs(int si, int sj)
{
    visi[si][sj] = true;
    int ans = 1;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) == true && visi[ci][cj] == false)
        {
            ans += dfs(ci, cj);
        }
    }
    return ans;
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
    
    memset(visi, false, sizeof(visi));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && visi[i][j] == false)
            {
                v.push_back(dfs(i, j));
            }
        }
    }

    sort(v.begin(), v.end());
    if (v.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int val : v)
        {
            cout << val << " ";
        }
    }


    return 0;
}