// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool canConstructTree(vector<int> &a)
// {
//     int n = a.size();
//     sort(a.begin(), a.end());

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < i && a[i] > i + 1)
//         {
//             return true;
//         }
//     }

//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }

//         if (canConstructTree(a))
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

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canConstructTree(vector<int> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());

    int last = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > last)
        {
            return false;
            break;
        }
        last = max(last, a[i] + 1);
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (canConstructTree(a))
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
