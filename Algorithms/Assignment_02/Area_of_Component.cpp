// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// char arr[N][N];
// bool visi[N][N];
// int n, m;
// vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

// bool valid(int i, int j)
// {
//     if (i < 0 || i >= n || j < 0 || j >= m || arr[i][j] != '.')
//     {
//         return false;
//     }
//     return true;
// }

// int dfs(int si, int sj)
// {
//     visi[si][sj] = true;
//     int total = 1;
//     for (int i = 0; i < 4; i++)
//     {
//         int ci = si + d[i].first;
//         int cj = sj + d[i].second;
//         if (valid(ci, cj) == true && visi[ci][cj] == false)
//         {
//             total += dfs(ci, cj);
//         }
//     }
//     return total;
// }

// int main(int argc, char const *argv[])
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int result = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == '.' && !visi[i][j])
//             {
//                 int value = dfs(i, j);
//                 result = min(value, result);
//             }
//         }
//     }

//     if (result == INT_MAX)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         cout << result << endl;
//     }

//     return 0;
// }

// // DONE
// // Accepted

//----------------------------

#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
char a[N][N];
bool vis[N][N];
int componentArea;
int minArea;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int ci, int cj)
{
    // if (ci < 0 || ci >= n || cj < 0 || cj >= m || a[ci][cj] != '.')
    // {
    //     return false;
    // }
    // return true;

    if(ci >= 0 && ci < n && cj >= 0 && cj < m)
    {
        return true;
    }
    return false;
}


int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int total = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            total += dfs(ci, cj);
        }
    }
    return total;
}
int main()
{
    cin >> n >> m;
    int si, sj;
    minArea = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int val = dfs(i, j);
                minArea = min(val, minArea);
            }
        }
    }

    if (minArea == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minArea << endl;
    }
    return 0;
}