#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int n, m;
char arr[N][N];
bool visi[N][N];

bool valid(int i, int j, int n, int m)
{
    if (i >= 0 && i < n && j >= 0 && j < m && arr[i][j] == '.')
    {
        return true;
    }
    return false;
}

void dfs(int i, int j)
{
    visi[i][j] = true;
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    for (int k = 0; k < 4; k++)
    {
        int ci = i + dir[k].first;
        int cj = j + dir[k].second;

        if (valid(ci, cj, n, m) == true && visi[ci][cj] == false)
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
            cin >> arr[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    int di, dj;
    cin >> di >> dj;

    memset(visi, false, sizeof(visi));
    dfs(si, sj);

    if (visi[di][dj])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// DONE
// Accepted