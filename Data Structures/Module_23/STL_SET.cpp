#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    int n;
    cin >> n;

    while (n--)     // O(N log N)
    {
        int x;
        cin >> x;
        s.insert(x);    // O(log N)
    }
    

    cout << s.count(10) << endl; // O(log N)

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

        return 0;
}
