#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool visi[20][20];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    visi[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
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
    int si, sj;
    cin >> si >> sj;
    dfs(si, sj);


    return 0;
}