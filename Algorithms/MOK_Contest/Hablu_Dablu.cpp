// #include <bits/stdc++.h>
// using namespace std;
// int n, h;
// int sum = 0;
// // int new_s;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> h;

//         vector<int> ar(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> ar[i];
//             sum += ar[i];
//         }
//         // sort(ar.begin(), ar.end());
//         // new_s = sum + n;
//     }
//     // cout << sum << "\n";
//     int new_s = sum + n;
//     // cout << new_s << "\n";

//     if (new_s == h)
//     {
//         cout << "Hablu"
//              << "\n";
//     }
//     else
//     {
//         cout << "Dablu"
//              << "\n";
//     }

//     return 0;
// }

//---------------------

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;
    int ar[n + 1];
    int mx_v = 0;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx_v = max(mx_v, ar[i]);
    }
    for (int i = 0; i < mx_v; i++)
    {
        sum += i;
    }

    if (sum < h)
    {
        cout << "Hablu" << "\n";
    }
    else
    {
        cout << "Dablu" << "\n";
    }

    return 0;
}
