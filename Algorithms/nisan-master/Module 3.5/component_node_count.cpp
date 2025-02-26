#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10; // 10^3 + 10
vector<int> v[N];
vector<int> ans;
bool visi[N];

int dfs(int src)
{
    int path_cnt = 1;
    visi[src] = true;
    for (int child : v[src])
    {
        if (!visi[child])
        {
            path_cnt += dfs(child);
        }
    }
    return path_cnt;
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
            cnt = dfs(i);
            ans.push_back(cnt);
        }
    }

    sort(ans.begin(), ans.end());
    if (ans.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
    }

    return 0;
}