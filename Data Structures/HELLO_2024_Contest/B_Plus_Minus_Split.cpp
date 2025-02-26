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
        string s;
        cin >> s;
        int p_sum = 0;
        int m_sum = 0;

        for (char c : s)
        {
            if (c == '+')
            {
                p_sum++;
            }
            else
            {
                m_sum++;
            }
        }

        if (p_sum >= m_sum)
        {
            cout << p_sum - m_sum << endl;
        }
        else
        {
            cout << m_sum - p_sum << endl;
        }
    }

    return 0;
}
