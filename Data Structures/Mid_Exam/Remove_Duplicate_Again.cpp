#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> My_List;
    int n;

    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        My_List.push_back(n);
    }
    My_List.sort();
    My_List.unique();

    for (int val : My_List)
    {
        cout << val << " ";
    }

    return 0;
}

// DONE
// Accepted