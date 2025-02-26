#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    vector<int> count(26, 0);

    for (char c : S)
    {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}

// DONE
// Accepted