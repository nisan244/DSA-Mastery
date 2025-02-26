// // 22-5 Insert in Heap Implementation

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
//     int x;
//     cin >> x;
//     v.push_back(x);
//     int curent_inx = v.size() - 1;

//     while (curent_inx != 0)
//     {
//         int parent_inx = (curent_inx - 1) / 2;
//         if (v[parent_inx] < v[curent_inx])
//         {
//             swap(v[parent_inx], v[curent_inx]);
//         }
//         else
//         {
//             break;
//         }
//         curent_inx = parent_inx;
//     }
//     for (int val : v)
//     {
//         cout << val << " ";
//     }

//         return 0;
// }

//-------------------------------

// 22-5 Insert in Heap Implementation

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        v.push_back(x);
        int curent_inx = v.size() - 1;

        while (curent_inx != 0)
        {
            int parent_inx = (curent_inx - 1) / 2;
            if (v[parent_inx] < v[curent_inx])
            {
                swap(v[parent_inx], v[curent_inx]);
            }
            else
            {
                break;
            }
            curent_inx = parent_inx;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}
