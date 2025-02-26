// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     unordered_map<int, int> frequency;

//     for (int i = 0; i < n; ++i)
//     {
//         int type;
//         cin >> type;

//         if (type == 1)
//         {
//             int x;
//             cin >> x;
//             frequency[x]++;
//         }
//         else if (type == 2)
//         {
//             if (frequency.empty())
//             {
//                 cout << "empty\n";
//             }
//             else
//             {
//                 int max_occurrence = 0;
//                 int max_value = 0;

//                 for (const auto &entry : frequency)
//                 {
//                     if (entry.second > max_occurrence || (entry.second == max_occurrence && entry.first > max_value))
//                     {
//                         max_occurrence = entry.second;
//                         max_value = entry.first;
//                     }
//                 }

//                 cout << max_value << "\n";
//                 frequency.erase(max_value);
//             }
//         }
//     }

//     return 0;
// }


//------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> freq(1000001, 0); // Assuming maximum value of X is 10^6
    int maxFreq = 0;
    while (t--)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            int x;
            cin >> x;
            freq[x]++;
            maxFreq = max(maxFreq, freq[x]);
        }
        else
        {
            if (maxFreq == 0)
            {
                cout << "empty\n";
            }
            else
            {
                int maxValue = -1;
                for (int i = 0; i < freq.size(); ++i)
                {
                    if (freq[i] == maxFreq)
                    {
                        maxValue = max(maxValue, i);
                        freq[i] = 0;
                    }
                }
                cout << maxValue << "\n";
                maxFreq = 0;
                for (int i = 0; i < freq.size(); ++i)
                {
                    maxFreq = max(maxFreq, freq[i]);
                }
            }
        }
    }

    return 0;
}
