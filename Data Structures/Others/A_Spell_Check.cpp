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
        // sort(s.begin(), s.end());
        // cout << s << endl;

        for(char c : s)
        {
            if(c == 'T' || c == 'i' && c == 'm' && c == 'u' && c == 'r')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
