#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int countArrays(int n, vector<int> &prefixSums)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        int total = 0;
        for (int j = 0; j < i; j++)
        {
            if (prefixSums[i - 1] - (j > 0 ? prefixSums[j - 1] : 0) >= 0)
            {
                total = (total + dp[j]) % MOD;
            }
        }
        dp[i] = total;
    }

    return dp[n];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> prefixSums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> prefixSums[i];
        }

        int result = countArrays(n, prefixSums);
        cout << result  << endl;
    }

    return 0;
}
