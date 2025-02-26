#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int vis[N][N];
pair<int, int> path[N][N];

vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

int n, m;
int sx, sy, ex, ey;

bool isValid(int x, int y)
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
            if (isValid(new_x, new_y))
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
            if (c == 'A')
            {
                sx = i;
                sy = j;
            }
            if (c == 'B')
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

    for (auto i : result)
    {
        cout << i.first << " " << i.second << endl;
    }
    //---------------------------

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

/*

INPUT:
########
#.A#...#
#.##.#B#
#......#
########

OUTPUT:
YES

*/