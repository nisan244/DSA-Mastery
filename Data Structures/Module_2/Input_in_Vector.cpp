// 2-6 How to Take Input in Vector

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> x;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         x.push_back(t);
//     }

//     for (int val : x)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

//-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int val : x)
    {
        cout << val << " ";
    }

    return 0;
}

/*

INPUT:
5
1 5 9 6 3

OUTPUT:
1 5 9 6 3

*/