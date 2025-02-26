#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10; // 10^3 + 10
vector<int> v[N];
bool visi[N];

void dfs(int src)
{
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
    int cnt = 0;
    memset(visi, false, sizeof(visi));
    for (int i = 0; i < n; i++)
    {
        if (!visi[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}