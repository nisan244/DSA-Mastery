// 15-2 Guilty Prince - LightOJ

#include <bits/stdc++.h>
using namespace std;

const int N = 25;
char ar[N][N];
bool vis[N][N];
int cunt;
int m, n;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cunt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && ar[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {

        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        cunt = 0;
        memset(vis, false, sizeof(vis));
        dfs(si, sj);
        cout << "Case " << cs++ << ": " << cunt << endl;
    }

    return 0;
}

/*

INPUT:
4
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..



OUTPUT:
Case 1: 45
Case 2: 59
Case 3: 6
Case 4: 13


*/