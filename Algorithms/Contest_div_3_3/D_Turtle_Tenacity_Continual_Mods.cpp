#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp.begin()->second == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<int> v;
        for (auto x : mp)
        {
            v.push_back(x.first);
        }
        if (v.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = true;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] % v[0] != 0)
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// DONE
// Accepted