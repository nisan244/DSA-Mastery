#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;

        // if (s.size() != 14 || (s[0] != '+' || s[1] != '8' || s[2] != '8' || s[3] != '0'))
        if (s.size() == 14 || (s[0] == '+' || s[1] == '8' || s[2] == '8' || s[3] == '0'))
        {
            // flag = false;
            char inx_4 = s[4];
            char inx_5 = s[5];

            // if (!(inx_4 == '1' && (inx_5 == '2' || inx_5 == '3' || inx_5 == '4' || inx_5 == '5' || inx_5 == '6' || inx_5 == '7' || inx_5 == '8' || inx_5 == '9')))
            if ((inx_4 == '1' && (inx_5 >= '2' && inx_5 <= '9')))
            {
                // flag = false;
                for (int i = 6; i < 14; i++)
                {
                    if (isdigit(s[i]))
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                flag = false;
            }
        }
        else 
        {
            flag = true;
        }

        if (flag)
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

//--------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         bool flag = true;

//         if (s.size() != 14 || (s[0] != '+' || s[1] != '8' || s[2] != '8' || s[3] != '0'))
//         {
//             flag = false;
//         }
//         else
//         {
//             char inx_4 = s[4];
//             char inx_5 = s[5];

//             // if (!(inx_4 == '1' && (inx_5 == '2' || inx_5 == '3' || inx_5 == '4' || inx_5 == '5' || inx_5 == '6' || inx_5 == '7' || inx_5 == '8' || inx_5 == '9')))
//             if (!(inx_4 == '1' && (inx_5 >= '2' && inx_5 <= '9')))
//             {
//                 flag = false;
//             }
//             else
//             {
//                 for (int i = 6; i < 14; i++)
//                 {
//                     if (!isdigit(s[i]))
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (flag)
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

// DONE
// Accepted

//-----------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string s;
//         cin >> s;
//         string s1 = s.substr(0, 6);
//         string a = "+88019", b = "+88012", c = "+88013", d = "+88014", e = "+88015", f = "+88016", g = "+88017", h = "+88018";
//         if (s.size() == 14)
//         {
//             if (s1 == a || s1 == b || s1 == c || s1 == d || s1 == e || s1 == f || s1 == g || s1 == h)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }