#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            long long ans = 1;
            for (long long i = 2; i <= n; i = i * 2)
            {
                ans = i;
            }
            cout << ans << endl;
        }
    }

    return 0;
}

//---------------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int result = 1;
        while (result * 2 <= n)
        {
            result *= 2;
        }
        cout << result << endl;
    }

    return 0;
}
