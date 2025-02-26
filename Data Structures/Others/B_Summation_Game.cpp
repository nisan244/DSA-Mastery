#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long sum = 0;

        // Alice removes at most k elements
        for (int i = 0; i < k; i++)
        {
            if (a[i] < 0)
            {
                a[i] *= -1;
            }
        }

        // Bob multiplies at most x elements by -1
        if (x % 2 == 1)
        {
            a[0] *= -1;
        }

        // Calculate the sum of the array
        for (int j = 0; j < n; j++)
        {
            sum += a[j];
        }

        cout << sum << endl;
    }

    return 0;
}
