// 17-2 Factorial of a Number
//-------- Factorial using recursive solution -----------------------

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fact(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    // int last_Fact = fact(n - 1);
    // return last_Fact * n;
    return fact(n - 1) * n;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------- Factorial using For loop ----------

// #include <bits/stdc++.h>
// using namespace std;
#define ll long long int

// int main(int argc, char const *argv[])
// {
//     ll n;
//     cin >> n;

//     ll result = 1;
//     for (ll i = 1; i <= n; i++)
//     {
//         result *= i;
//     }
//     cout << result << endl;

//     return 0;
// }
