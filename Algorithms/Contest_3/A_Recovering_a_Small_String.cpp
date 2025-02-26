#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                      'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void decode(int n, vector<char> &word)
{
    int pos = 0;
    while (n > 0)
    {
        int val = (n - 1) % 26;
        word[pos] = chars[val];
        n = (n - val - 1) / 26;
        pos++;
    }
}

bool lexicographicallySmaller(vector<char> &a, vector<char> &b)
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }
        else if (a[i] > b[i])
        {
            return false;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<char> word(3);
        decode(n, word);
        while (true)
        {
            if (lexicographicallySmaller(word, chars))
            {
                break;
            }
            next_permutation(word.begin(), word.end());
        }
        for (int j = 0; j < 3; j++)
        {
            cout << word[j];
        }
        cout << endl;
    }
    return 0;
}