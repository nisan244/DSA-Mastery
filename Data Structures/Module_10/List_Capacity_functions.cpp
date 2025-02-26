// 10-2 List Capacity Functions

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> mylist = {10, 20, 30, 40, 50};
    // cout << mylist.max_size();

    // mylist.clear();
    cout << "Size: " << mylist.size() << endl;

    mylist.resize(3);
    cout << "Size: " << mylist.size() << endl;

    mylist.resize(6, 100);
    cout << "Size: " << mylist.size() << endl;

    for (int v : mylist)
    {
        cout << v << endl;
    }

    return 0;
}
