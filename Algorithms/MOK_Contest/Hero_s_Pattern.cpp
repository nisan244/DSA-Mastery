// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int space = n - 1, k = n, s_1 = 4, v = n * 2 - 1;
//     int cur = 1, f = 1, k1 = 2;

//     for (int i = 0; i < (2 * n) - 1; i++)
//     {

//         for (int j = 0; j < space; j++)
//         {

//             cout << " ";
//         }
//         for (int j = 0; j < k; j++)
//         {
//             cout << "*";
//         }

//         if (i <= n - 1)
//         {
//             for (int i = 0; i < s_1*i; i++)
//             {
//                 cout << " ";
//                 cur = s_1 * i;
//             }
//             for (int j = 0; j < k; j++)
//             {
//                 cout << "*";
//             }
//         }
//         if (i >= n)
//         {
//             for (int j = 0; j < cur - (4 * f); j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 0; j < k1; j++)
//             {
//                 cout << "*";
//             }
//             f++;
//             k1++;
//         }
//         if (i < v / 2)
//         {
//             space--;
//             k--;
//         }
//         else
//         {
//             space++;
//             k++;
//         }
//         cout << "\n";
//     }

//     return 0;
// }

//=-----------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int s_out = n, star = n * 2, k = 4;

//     for (int i = 1; i <= (n * 2) - 1; i++)
//     {
//         for (int j = 1; j <= s_out; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j < k; j++)
//         {
//             cout << " ";
//         }
//         if (i <= n - 1)
//         {
//             s_out--;
//             star -= 2;
//             k += 2;
//         }
//         else
//         {
//             s_out++;
//             star += 2;
//             k -= 2;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//=------------------=-==-=-=-=-=-===-=-==

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int s1 = n - 1, k1 = n, s2 = 0, k2 = n;
//     for (int i = 1; i <= (2 * n) - 1; i++)
//     {
//         for (int j = 1; j <= s1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= k1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= s2; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= k2; j++)
//         {
//             cout << "*";
//         }
//         if (i < n)
//         {
//             s1--;
//             k1--;
//             s2 += 4;
//             k2--;
//         }
//         else
//         {
//             s1++;
//             k1++;
//             s2 -= 4;
//             k2++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-===============================

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // n =  7, n - i + 1 = 7 - 1 + 1 = 7
        // n = 7, n - i + 1 = 7 - 2 + 1 = 6
        // n = 7, n - i + 1 = 7 - 3 + 1 = 5
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // n = 7,  (4*(i - 1)) = (4 * 1 - 1) = 0
        // n = 7,  (4*(i - 1)) = (4 * 2 - 1) = 4
        // n = 7,  (4*(i - 1)) = (4 * 3 - 1) = 8
        // n = 7,  (4*(i - 1)) = (4 * 4 - 1) = 12
        for (int j = 1; j <= (4 * (i - 1)); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        // n = 7, i = 1 -> (4*(7 - (1 + 1))) = 4*(7 - 2) = 4*5 = 20       
        for (int j = 1; j <= (4*(n - (i + 1))); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
