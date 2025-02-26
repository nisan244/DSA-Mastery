#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10; // 10^5 + 10
vector<int> v[N];
bool visi[N];

// BFS follow shortest path
// DFS don't follow shortest path

void dfs(int src)
{
    cout << src << " ";
    visi[src] = true;
    for (int child : v[src])
    {
        if (!visi[child])
        {
            dfs(child);
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
    int src;
    cin >> src;
    memset(visi, false, sizeof(visi));
    dfs(src);

    return 0;
}