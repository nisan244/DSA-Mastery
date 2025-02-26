// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         vector<int> B(m);
//         for (int i = 0; i < m; i++)
//         {
//             cin >> B[i];
//         }

//         for (int i = 0; i < m; i++)
//         {
//             sort(arr.begin() + n - B[i], arr.end());
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        // Sort the array once
        sort(A.begin(), A.end());

        for (int i = 0; i < M; ++i)
        {
            int B;
            cin >> B;

            // Update the suffix for each operation
            reverse(A.end() - B, A.end());
        }

        for (int i = 0; i < N; ++i)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}