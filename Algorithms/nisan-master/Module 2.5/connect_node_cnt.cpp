#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visi[1010];
int cnt = 0;

int bfs(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visi[src] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;
        if (level == 1)
        {
            cnt++;
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
    cout << bfs(src) << endl;
    return 0;
}