// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> n;
//     // cout << n.max_size() << endl;

//     cout << n.capacity() << endl;
//     n.push_back(10);
//     cout << n.capacity() << endl;
//     n.push_back(20);
//     cout << n.capacity() << endl;
//     n.push_back(30);
//     cout << n.capacity() << endl;
//     n.push_back(40);
//     cout << n.capacity() << endl;
//     n.push_back(50);
//     cout << n.capacity() << endl;

//     return 0;
// }

//-----------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> n;
//     // cout << n.max_size() << endl;
//     n.push_back(10);
//     n.push_back(20);
//     n.push_back(30);
//     n.push_back(40);
//     n.push_back(50);
//     cout << n.size() << endl;
//     // n.clear();

//     for (int i = 0; i < n.size(); i++)
//     {
//         cout << n[i] << " ";
//     }

//     return 0;
// }

//-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> n;
    // cout << n.max_size() << endl;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    n.push_back(40);
    n.push_back(50);
    cout << "Size - " << n.size() << endl;
    n.resize(3);
    cout << "Size - " << n.size() << endl;
    n.resize(7, 5);

    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}
