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

        int min_val = INT_MIN, max_val = INT_MAX - 1;

        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;

            if (a == 1)
            {
                min_val = max(min_val, x);
            }
            else if (a == 2)
            {
                max_val = min(max_val, x);
            }
        }

        // Output the number of integers that satisfy all constraints
        cout << max(0, max_val - min_val +1) << endl;
    }

    return 0;
}
