#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    for (int x : mat[3])
    {
        cout << x << " ";
    }

    
    return 0;
}