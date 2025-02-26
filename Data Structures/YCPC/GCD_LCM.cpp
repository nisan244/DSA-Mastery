// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     string n;
//     cin >> n;

//     long long int val = 0;

//     for (char c : n)
//     {
//         val += c - '0';
//     }

//     vector<long long int> arr(val);

//     for (long long int i = 0; i < val; ++i)
//     {
//         cin >> arr[i];
//     }
//     long long sum = 0;

//     for (long long int i = 0; i < val; i++)
//     {
//         for (long long int j = i + 1; j < val; j++)
//         {
//             sum += arr[i];
//         }
//     }

//     cout << sum << endl;

//     return 0;
// }

//--------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<long long int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
