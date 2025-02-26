#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string word;
        cin >> word;

        string syllables;

        for (int i = 0; i < n; i++)
        {
            if ((i < n - 2) && (word[i] == 'a' || word[i] == 'e') && word[i + 1] == 'b' && (word[i + 2] == 'a' || word[i + 2] == 'e'))
            {
                syllables += word[i];
                syllables += '.';
            }
            else if (word[i] == 'a' || word[i] == 'e')
            {
                syllables += word[i];
                syllables += '.';
            }
            else
            {
                syllables += word[i];
            }
        }

        cout << syllables << endl;
    }

    return 0;
}
