// #include <bits/stdc++.h>
// using namespace std;

// int min_length(string s)
// {
//     int n = s.length();
//     int first_w = n;
//     int last_w = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if(s[i] == 'B')
//         {
//             first_w = min(first_w, i);
//             last_w = max(last_w, i);
//         }
//     }

//     return max(last_w - first_w + 1, 1);
// }

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         cout << min_length(s) << endl;
//     }

//     return 0;
// }

//----------------------------------------

#include <bits/stdc++.h>
using namespace std;

int min_length(string s)
{
    int n = s.length();
    int min_len = n;
    int black_C = 0;

    for(char c : s)
    {
        if(c == 'B')
        {
            black_C++;
        }
    }
    if(black_C == 0)
    {
        return 0;
    }
    int L = 0, R = 0, C_B = 0;
    while (R < n)
    {
        if(s[R] == 'B')
        {
            C_B++;
        }
        while (C_B == black_C)
        {
            min_len = min(min_len, R - L + 1);
            if(s[L] == 'B')
            {
                C_B++;
            }
            L++;
        }
        R++;
    }
    return min_len;
}

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
        cout << min_length(s) << endl;
    }

    return 0;
}
