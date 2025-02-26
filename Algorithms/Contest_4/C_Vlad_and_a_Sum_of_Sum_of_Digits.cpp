#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int totalSum = 0;
        for (int i = 1; i <= n; ++i)
        {
            totalSum += sumOfDigits(i);
        }
        cout << totalSum << endl;
    }

    return 0;
}
