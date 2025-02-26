#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;

        string S;
        cin >> S;

        int swipesLeft = X;

        for (char c : S)
        {
            if (c == '0')
            {
                swipesLeft--;
            }
            else
            {
                swipesLeft = X;
            }

            if (swipesLeft < 0)
            {
                cout << "NO" << endl;
                break;
            }
        }

        if (swipesLeft >= 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}