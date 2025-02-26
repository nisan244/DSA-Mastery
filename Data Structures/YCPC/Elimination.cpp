// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     string value;
//     cin >> value;

//     int q;
//     cin >> q;
//     vector<int> arr(value.size(), 0);
//     int count = 0;

//     for (int i = 1; i < value.size(); i++)
//     {
//         if(value[i] = value[i -1] && value[i] == '1')
//         {
//             count++;
//         }
//         arr[i] = count;
//     }
//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;

//             int ans = arr[r - 1] - arr[l - 1];
//             cout << ans << endl;
//         }

//     return 0;
// }

//--------

// while (q--)
// {
//     int l, r;
//     cin >> l >> r;
//     stack<char> st;

//     for (int i = l - 1; i < r; i++)
//     {
//         char c = value[i];
//         if (c == '1')
//         {
//             if (!st.empty() && st.top() == '0')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(c);
//             }
//         }
//     }
//     cout << st.size() << endl;
// }

//---------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    string value;
    cin >> value;

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        stack<char> st;
        int count = 0;

        for (int i = l - 1; i < r; i++)
        {
            if (!st.empty() && st.top() == '1' && value[i] == '1')
            {
                st.pop();
                count += 2;
            }
            else
            {
                st.push(value[i]);
            }
        }
        cout << count << endl;
    }

    return 0;
}
