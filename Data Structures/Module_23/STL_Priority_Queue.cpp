// 23-2 How STL Priority Queue Works

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(log N)
        }
        else if (c == 1)
        {
            pq.pop(); // O(log N)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}
