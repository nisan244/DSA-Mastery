// 13-7 Edge to Adjacency List

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (pair<int, int> child : v[i])
        {
            cout << "{" << child.first << ", " << child.second << "} ";
        }
        cout << endl;
    }

    return 0;
}

/*

INPUT:
4 5
0 1 10
1 2 11
2 3 12
3 2 12
3 1 13


OUTPUT:
0 -> {1, 10}
1 -> {2, 11}
2 -> {3, 12}
3 -> {2, 12} {1, 13}

*/