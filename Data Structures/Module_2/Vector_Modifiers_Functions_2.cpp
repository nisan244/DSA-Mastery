// 2-4 Vector Modifiers Functions - II

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> x = {10, 20, 30, 20, 40, 50, 20, 20, 10, 40, 50};

//     replace(x.begin(), x.end(), 20, 500);

//     for(int v : x)
//     {
//         cout << v << " ";
//     }

//     return 0;
// }

//-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> x = {10, 20, 30, 20, 40, 50, 20, 20, 10, 40, 50};

    // vector<int>::iterator it;

    auto it = find(x.begin(), x.end(), 20);

    if(it == x.end()) cout << "Not Found" << endl;
    else cout << "Found" << endl;

    cout << *it;
    

    // for (int v : x)
    // {
    //     cout << v << " ";
    // }

    return 0;
}
