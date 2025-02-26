// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }
//     int x;
//     cin >> x;
//     int L = 0;
//     int R = n - 1;
//     bool flag = false;

//     while (L <= R)
//     {
//         int mid_index = (L + R) / 2;
//         if (ar[mid_index] == x)
//         {
//             flag = true;
//             break;
//         }
//         if (x > ar[mid_index])
//         {
//             L = mid_index + 1;
//         }
//         else
//         {
//             R = mid_index - 1;
//         }
//     }
//     if (flag == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     // while (q--)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         if(ar[i] == x)
//     //         {
//     //             flag = true;
//     //             break;
//     //         }
//     //     }
//     //     if(flag == true)
//     //         cout << "Found" << endl;
//     //     else
//     //         cout << "Not Found" << endl;
//     // }

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(int argc, char const *argv[])
// // {
// //     int n, q;
// //     cin >> n >> q;

// //     int ar[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> ar[i];
// //     }
// //     while (q--)
// //     {
// //         int x;
// //         cin >> x;
// //         bool flag = false;
// //         for (int i = 0; i < n; i++)
// //         {
// //             if (ar[i] == x)
// //             {
// //                 flag = true;
// //                 break;
// //             }
// //         }
// //         if (flag == true)
// //         {
// //             cout << "Found" << endl;
// //         }
// //         else
// //         {
// //             cout << "Not Found" << endl;
// //         }
// //     }

// //     return 0;
// // }

//--------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x;
    cin >> x;
    int L = 0;
    int R = n - 1;
    bool flag = false;

    while (L <= R)
    {
        int mid_index = (L + R) / 2;
        if(ar[mid_index] == x)
        {
            flag = true;
            break;
        }
        if(x > ar[mid_index])
        {
            L = mid_index + 1;
        }
        else
        {
            R = mid_index - 1;
        }
    }
    if(flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*

INPUT:

5
5 8 15 50 65
8

OUTPUT:

YES

*/