// 17-6 Memoization on Fibonacci Series

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 10;
ll dp[N];

ll fibo(ll n) // O(N)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));

    cout << fibo(n) << endl;

    return 0;
}
