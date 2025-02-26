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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int count = 0;

        while (i < n && j < m)
        {
            if (a[i] == b[j] && a[i] <= k)
            {
                ++count;
                ++i;
                ++j;
            }
            else if (a[i] < b[j])
            {
                ++i;
            }
            else
            {
                ++j;
            }
        }

        bool possible = (count >= k && count % 2 == 0);

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
