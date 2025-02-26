#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;   // 10^5 + 10
vector<int> v[N];
bool visi[N];

void dfs(int src)
{
    cout << src << " ";
    visi[src] = true;
    for (int val : v[src])
    {
        if (!visi[val])
        {
            dfs(val);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visi, false, sizeof(visi));

    int src;
    cin >> src;
    dfs(src);

    
    return 0;
}