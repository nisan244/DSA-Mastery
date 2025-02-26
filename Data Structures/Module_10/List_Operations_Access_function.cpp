// 10-4 List Operations and Access Related Functions

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> myList = {1, 5, 6, 98, 2, 9, 1, 5, 65, 10, 30, 15};

    // myList.remove(1); 

    // myList.sort();  // O(N log N)
    // myList.sort(greater<int>());   // O(N log N)

    // myList.unique();    // O(N) and With sort O(N log N)

    // myList.reverse();    // O(N)


    // for(int val : myList) cout << val << endl;

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    cout << *next(myList.begin(), 3) << endl; // Any element print

    // int ar[5] = {5, 1, 56, 87, 9};
    // sort(ar, ar+5);
    // for(int val : ar) cout << val << endl;



    return 0;
}
