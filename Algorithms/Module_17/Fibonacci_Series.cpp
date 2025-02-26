// 17-3 Fibonacci Series Recursive Solution

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fibo(ll n) // O(2^N)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    cout << fibo(n) << endl;

    return 0;
}
