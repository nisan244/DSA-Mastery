#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10; // 10^5 + 10
vector<int> v[N];
bool visi[N];
int cnt = 0;

int dfs(int src)
{
    cnt++;
    visi[src] = true;
    for (int child : v[src])
    {
        if (!visi[child])
        {
            dfs(child);
        }
    }
    return cnt;
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
    cout << dfs(src) << endl;

    
    return 0;
}