#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt_A = 0, cnt_B = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                cnt_A++;
            }
            else
            {
                cnt_B++;
            }
        }
        if (cnt_A > cnt_B)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
