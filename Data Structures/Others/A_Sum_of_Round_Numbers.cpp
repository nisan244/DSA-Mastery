#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> r_num;
        int value = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit > 0)
            {
                r_num.push_back(digit * value);
            }
            n /= 10;
            value *= 10;
        }

        // cout << n << endl;
        // cout << value << endl;

        cout << r_num.size() << endl;
        for (int i = 0; i < r_num.size(); i++)
        {
            cout << r_num[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
