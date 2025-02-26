// 23-5 How STL Map Works

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> mp;

    // mp.insert({"Sakib Al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 28});
    // mp.insert({"Santo", 99});

    mp["Sakib Al Hasan"] = 75;  // O(log N)
    mp["Tamim Iqbal"] = 28;     // O(log N)
    mp["Santo"] = 99;           // O(log N)

    // cout << mp["Tamim Iqbal"] << endl;
    if(mp.count("Sakib Al Hasan"))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

        return 0;
}
