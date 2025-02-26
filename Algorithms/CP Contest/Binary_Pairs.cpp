#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_num = 0;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
            {
                count_num++;
            }
        }
        cout << count_num << "\n";
    }

    return 0;
}

// DONE
// Accepted