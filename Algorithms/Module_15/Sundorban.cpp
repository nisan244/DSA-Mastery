// 15-1 Sundarban - Outsbook

// #include <bits/stdc++.h>
// using namespace std;

// char ar[50][50];
// bool vis[50][50];
// int dis[50][50];
// int n;

// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < n);
// }

// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     dis[si][sj] = 0;

//     while (!q.empty())
//     {
//         pair<int, int> par = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = par.first + d[i].first;
//             int cj = par.second + d[i].second;
//             if(valid(ci, cj) && !vis[ci][cj] && ar[ci][cj] != 'T')
//             {
//                 q.push({ci, cj});
//                 vis[ci][cj] = true;
//                 dis[ci][cj] = dis[par.first][par.second] + 1;
//             }
        

//         }
        
//     }
    
// }

// int main(int argc, char const *argv[])
// {
//     while (cin >> n)
//     {
//         int si, sj;
//         int di, dj;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> ar[i][j];
//                 if (ar[i][j] == 'S')
//                 {
//                     si = i;
//                     sj = j;
//                 }
//                 if (ar[i][j] == 'E')
//                 {
//                     di = i;
//                     dj = j;
//                 }
//             }
//         }
//         memset(vis, false, sizeof(vis));
//         memset(dis, -1, sizeof(dis));
//         bfs(si, sj);
//         cout << dis[di][dj] << endl;
//     }

//     return 0;
// }


//-----------------------------------------------

#include <bits/stdc++.h>
using namespace std;

char ar[50][50];
bool vis[50][50];
int dis[50][50];
int n;

vector<pair<int, int> > d;
bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < n);
}

void bfs(int si, int sj)
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && ar[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});
    while (cin >> n)
    {
        int si, sj;
        int di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (ar[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(si, sj);
        cout << dis[di][dj] << endl;
    }

    return 0;
}

/*

INPUT:
5
S P P P P
T P T P P
T P P P P
P T E T T
P T P T T

OUTPUT:
5

*/