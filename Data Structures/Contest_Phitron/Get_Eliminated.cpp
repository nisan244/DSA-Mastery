// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin>> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int count_0 = 0;
//         int count_1 = 0;

//         for(char c : s)
//         {
//             if(c == '0')
//             {
//                 count_0++;
//             }
//             else if(c == '1')
//             {
//                 count_1++;
//             }
//         }
//         int max_val = max(count_0, count_1);
//         int min_val = min(count_0, count_1);
//         int sub_val = max_val - min_val;

//         // cout << max_val << endl;
//         // cout << min_val << endl;
//         if(count_0 == 0)
//         {
//             cout << "0" << endl;
//         }
//         else if(count_1 == 0)
//         {
//             cout << count_0 << endl;
//         }
//         else
//         {
//             // cout << max_val - min_val << endl;
//             if(count_0 > count_1)
//             {
//                 cout << count_0 - count_1 << endl;
//             }
//             else
//             {
//                 cout << count_1 - count_0 << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> s;
        string n, value = "";
        cin >> n;
        for (char c : n)
        {
            if (!s.empty() && c == '1' && s.top() == '1')
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }
        int count = 0, max_val = 0;
        while (!s.empty())
        {
            if (s.top() == '0')
            {
                count++;
                if (count > max_val)
                {
                    max_val = count;
                }
            }
            else
            {
                count = 0;
            }
            s.pop();
        }
        cout << max_val << endl;
    }

    return 0;
}

// DONE
// Accepted