#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
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

        vector<long long> prefixSum(n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            prefixSum[i + 1] = prefixSum[i] + a[i];
        }

        long long totalSum = prefixSum[n];

        long long minPenalty = LLONG_MAX;

        for (int i = 1; i < n; ++i)
        {
            long long leftSum = prefixSum[i];
            long long rightSum = totalSum - leftSum;
            long long penalty = abs(leftSum - rightSum);

            minPenalty = min(minPenalty, penalty);
        }

        cout << minPenalty << endl;
    }

    return 0;
}
