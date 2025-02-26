// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::vector<int> arr = {5, 10, 3, 15, 20, 8}; // Sample array
//     int n = arr.size();

//     // Find the indices of the top two maximum values
//     int max1_index = -1;
//     int max2_index = -1;
//     int max1 = INT_MIN;
//     int max2 = INT_MIN;

//     for (int i = 0; i < n; ++i)
//     {
//         if (arr[i] > max1)
//         {
//             max2 = max1;
//             max2_index = max1_index;
//             max1 = arr[i];
//             max1_index = i;
//         }
//         else if (arr[i] > max2)
//         {
//             max2 = arr[i];
//             max2_index = i;
//         }
//     }

//     // Print the array
//     std::cout << "Array: ";
//     for (int num : arr)
//     {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Print the top two maximum values and their indices
//     std::cout << "Top two maximum values: " << max1 << " (index: " << max1_index << ") and " << max2 << " (index: " << max2_index << ")" << std::endl;

//     return 0;
// }

//-------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int first_inx = -1;
//         int second_inx = -1;
//         int top_1 = INT_MIN;
//         int top_2 = INT_MIN;

//         for (int i = 0; i < n; ++i)
//         {
//             if (arr[i] > top_1)
//             {
//                 top_2 = top_1;
//                 second_inx = first_inx;
//                 top_1 = arr[i];
//                 first_inx = i;
//             }
//             else if (arr[i] > top_2)
//             {
//                 top_2 = arr[i];
//                 second_inx = i;
//             }
//         }

//         if (first_inx < second_inx)
//         {
//             cout << first_inx << " " << second_inx << endl;
//         }
//         else
//         {
//             cout << second_inx << " " << first_inx << endl;
//         }
//         // cout << top_1 << " " << top_2 << endl;
//         // cout << first_inx << " " << second_inx << endl;
//     }

//     return 0;
// }

//--------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> new_arr(arr);
        sort(new_arr.begin(), new_arr.end(), greater<int>());

        int top_1 = new_arr[0];
        int top_2 = new_arr[1];

        int top1_inx = find(arr.begin(), arr.end(), top_1) - arr.begin();
        int top2_inx = find(arr.begin(), arr.end(), top_2) - arr.begin();

        if (top1_inx < top2_inx)
        {
            cout << top1_inx << " " << top2_inx << endl;
        }
        else
        {
            cout << top2_inx << " " << top1_inx << endl;
        }
    }

    return 0;
}

// DONE
// Accepted