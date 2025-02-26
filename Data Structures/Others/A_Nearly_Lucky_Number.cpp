#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if(digit == 4 || digit == 7)
        {
            count++;
        }
        n = n / 10;
    }

    // cout << n << endl;
    

    return 0;
}
