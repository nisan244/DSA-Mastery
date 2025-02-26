#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    cin.ignore();
    // getchar();
    while (t--)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        int mx = INT_MIN;
        string new_text;

        while (ss >> word)
        {
            mp[word]++;
            if (mx < mp[word])
            {
                mx = mp[word];
                new_text = word;
            }
        }
        cout << new_text << " " << mx << endl;
    }

    return 0;
}

// DONE
// Accepted