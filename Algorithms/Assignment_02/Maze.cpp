

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e3 + 10;
int vis[N][N];
pair<int, int> path[N][N];

vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
int sx, sy, ex, ey;

bool valid(int x, int y)
{
    return !vis[x][y] && (x >= 0) && (x < n) && (y >= 0) && (y < m);
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto mv : moves)
        {
            int new_x = x + mv.first;
            int new_y = y + mv.second;
            if (valid(new_x, new_y))
            {
                vis[new_x][new_y] = true;
                path[new_x][new_y] = {mv.first, mv.second};
                q.push({new_x, new_y});
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
            path[i][j] = {-1, -1};
            char c;
            cin >> c;
            if (c == '#')
            {
                vis[i][j] = true;
            }
            if (c == 'R')
            {
                sx = i;
                sy = j;
            }
            if (c == 'D')
            {
                ex = i;
                ey = j;
            }
        }
    }

    bfs();
    // if (!vis[ex][ey])
    // {
    //     cout << "NO" << endl;
    //     return 0;
    // }
    // cout << "YES" << endl;

    vector<pair<int, int>> result;
    pair<int, int> dis = {ex, ey};
    while (dis.first != sx || dis.second != sy)
    {
        result.push_back({path[dis.first][dis.second]});
        dis.first -= result.back().first;
        dis.second -= result.back().second;
    }

    reverse(result.begin(), result.end());

    //-----------------------------------
    // for (auto i : result)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    //------------------------------

    for (auto i : result)
    {
        if (i.first == 0 && i.second == 1)
        {
            cout << "R"
                 << " ";
        }
        if (i.first == 0 && i.second == -1)
        {
            cout << "L"
                 << " ";
        }
        if (i.first == -1 && i.second == 0)
        {
            cout << "U"
                 << " ";
        }
        if (i.first == 1 && i.second == 0)
        {
            cout << "D"
                 << " ";
        }
    }

    return 0;
}

// INPUT:
// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########

// OUTPUT:
// YES

//-------------------------

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi pair<ll, ll>

const ll N = 1e3 + 10;
char arr[N][N];
bool vis[N][N];
map<pi, pi> mp;
ll n, m;
vector<pi> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(ll i, ll j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == '#')
    {
        return false;
    }
    return true;
}

void bfs(ll si, ll sj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pi p = q.front();
        q.pop();
        int ci = p.first;
        int cj = p.second;
        if (arr[ci][cj] == 'D')
        {
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            ll new_i = ci + d[i].first;
            ll new_j = cj + d[i].second;
            if (valid(new_i, new_j) == true && !vis[new_i][new_j])
            {
                q.push({new_i, new_j});
                vis[new_i][new_j] = true;
                mp[{new_i, new_j}] = {ci, cj};
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> m;
    ll si, sj, di, dj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (arr[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    bfs(si, sj);
    pi fi = {di, dj};
    pi fj = {si, sj};
    if (!vis[di][dj] || mp[fi] == fj)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        while (mp[fi] != fj)
        {
            if (arr[fi.first][fi.second] != 'D')
            {
                arr[fi.first][fi.second] = 'X';
            }
            fi = mp[fi];
        }
        arr[fi.first][fi.second] = 'X';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}

*/
// DONE
// Accepted