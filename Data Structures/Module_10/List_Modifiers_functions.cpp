// 10-3 List Modifiers Functions

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // list<int> myList = {10, 20, 30};
    // list<int> newList;

    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // for(int val : newList)
    // {
    //     cout << val << endl;
    // }
//--------------------------------

    // list<int> myList = {10, 20, 30, 40, 50};
    // list<int> myList_2 = {60, 70, 80, 90, 100};

    // myList.push_back(100);
    // myList.push_front(500);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 3), 100); // O(N)
    // myList.insert(next(myList.begin(),2), {100, 200, 300});   // O(N)
    // myList.insert(next(myList.begin(), 5), myList_2.begin(), myList_2.end());   // O(N)

    // myList.erase(next(myList.begin(), 2));   // O(N)
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));   // O(N)

    // list<int> myList = {60, 70, 60, 80, 60, 90, 100};
    // replace(myList.begin(), myList.end(), 60, 500);

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }


    list<int> myList = {60, 70, 60, 80, 60, 90, 100};

    auto it = find(myList.begin(), myList.end(), 60);
    if(it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found"  << endl;
    }



    return 0;
}
