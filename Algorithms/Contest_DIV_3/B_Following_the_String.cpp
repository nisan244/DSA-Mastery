#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> trace[i];
        }

        string result;
        map<char, int> freq;

        for (int i = 0; i < n; ++i)
        {
            char ch = 'a';

            // Find the character with remaining occurrences
            while (freq[ch] != trace[i])
            {
                ++ch;
            }

            result += ch;
            ++freq[ch];
        }

        cout << result << endl;
    }

    return 0;
}
