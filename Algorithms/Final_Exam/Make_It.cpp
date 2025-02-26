// #include <bits/stdc++.h>
// using namespace std;

// bool canReach(int n)
// {
//     if (n == 1)
//         return true;
//     if (n < 1)
//     {
//         return false;
//     }

//     return canReach(n - 3) || (n % 2 == 0 && canReach(n / 2));
// }

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         if (canReach(n))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

//------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         queue<int> q;
//         q.push(1);
//         bool flag = false;

//         while (!q.empty())
//         {
//             int par = q.front();
//             q.pop();
//             if (par == n)
//             {
//                 flag = true;
//             }
//             if (par + 3 <= n)
//             {
//                 q.push(par + 3);
//             }
//             if (par * 2 <= n)
//             {
//                 q.push(par * 2);
//             }
//         }

//         if (flag)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

//------------------------------

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N];

bool knapsck(int n, int s)
{
    if (s == n)
    {
        return true;
    }
    if (s > n)
    {
        return false;
    }
    if (dp[s] != -1)
    {
        return dp[s];
    }
    if (s <= n)
    {
        int op_1 = knapsck(n, s + 3);
        int op_2 = knapsck(n, s * 2);
        return dp[s] = op_1 || op_2;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        memset(dp, -1, sizeof(dp));

        if (knapsck(n, 1) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted