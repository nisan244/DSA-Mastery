// 17-7 Bottom Up Approach on Fibonacci Series

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll ar[n];
    ar[0] = 0;
    ar[1] = 1;
    // O(N)
    for (ll i = 2; i <= n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
    }
    cout << ar[n] << endl;

    return 0;
}
