// 10-1 List Constructors

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // list<int> mylist;
    // cout << mylist.size();

    // list<int> mylist(20);
    // cout << mylist.size();

    // list<int> mylist(20, 5);
    // list<int> mylist = {1, 2, 3, 4, 5};
    // list<int> mylist_2(mylist);

    // int a[5] = {1, 2, 3, 4, 5};
    // list<int> mylist_2(a, a+5);

    vector<int> v = {10, 20, 30, 40, 50};
    list<int> mylist_2(v.begin(), v.end());

    // for(auto it = mylist_2.begin(); it != mylist_2.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int c : mylist_2)
    {
        cout << c << endl;
    }

    return 0;
}
