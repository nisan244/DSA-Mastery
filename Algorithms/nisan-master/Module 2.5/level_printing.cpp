#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visi[1010];
vector<int> ans;

void bfs(int src, int l)
{
    queue<pair<int, int>> q;
    q.push({0, 0});
    visi[src] = true;
    
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;
        if (level == l)
        {
            ans.push_back(parent);
        }
        for (int val : v[parent])
        {
            if (visi[val] == false)
            {
                q.push({val, level + 1});
                visi[val] = true;
            }
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
    int l;
    cin >> l;
    memset(visi, false, sizeof(visi));
    bfs(0, l);
    sort(ans.begin(), ans.end(), greater<>());
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}