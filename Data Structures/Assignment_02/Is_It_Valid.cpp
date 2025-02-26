#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int T;
    cin >> T;

    while (T--)
    {
        stack<char> st;
        stack<char> st_2;
        string val;
        cin >> val;

        for (char c : val)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else
            {
                st_2.push(c);
            }
        }
        if (st.size() == st_2.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted

//-----------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string val;
//         cin >> val;
//         int count_0 = 0;
//         int count_1 = 0;

//         for (char c : val)
//         {
//             if (c == '0')
//             {
//                 count_0++;
//             }
//             else
//             {
//                 count_1++;
//             }
//         }
//         if (count_0 == count_1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
