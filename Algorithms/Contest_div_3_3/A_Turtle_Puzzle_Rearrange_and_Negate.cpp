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
        vector<int> arr(n);
        int p_sum = 0;
        int m_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                p_sum += arr[i];
            }
            else
            {
                m_sum += (arr[i] * -1);
            }
        }

        cout << abs(m_sum + p_sum) << endl;
    }

    return 0;
}
