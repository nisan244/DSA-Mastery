#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, q;
    cin >> n >> q;

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //---- Prefix Sum ------------

    long long int pre[n];
    pre[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }

    while (q--)
    {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;
        long long int sum;
        if (L == 0)
        {
            sum = pre[R]; // sum = pre[R] - 0;
        }
        else
        {
            sum = pre[R] - pre[L - 1];
        }
        cout << sum << endl;
    }

    return 0;
}

// DONE
// Accepted

/*

INPUT:
6 3
6 4 2 7 2 7
1 3
3 6
1 6

OUTPUT:
12
18
28

-------------

INPUT:
4 3
5 5 2 3
1 3
2 3
1 4

OUTPUT:
12
7
15

*/

//-------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n, q;
//     cin >> n >> q;

//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }

//     while (q--)
//     {
//         int L, R;
//         cin >> L >> R;
//         L--;
//         R--;
//         int sum = 0;
//         for (int i = L; i <= R; i++)
//         {
//             sum += ar[i];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }
