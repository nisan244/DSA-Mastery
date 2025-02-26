#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> x = {1, 2, 3, 4, 5, 10, 12, 14, 16};
    //----------- Last item found ----------------
    // cout << x[x.size()-1];
    // cout << x.back();

    //------------ First item found ------------------
    cout << "First item -> " << x[0] << endl;
    cout << "First item -> " << x.front() << endl;

    for (auto it = x.begin(); it < x.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
