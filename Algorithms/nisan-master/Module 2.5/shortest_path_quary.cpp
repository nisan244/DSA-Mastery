#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visited[1010];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visited[src] = true;
    bool find = false;
    
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;
        if (parent == des)
        {
            cout << level << endl;
            find = true;
        }
        for (int val : v[parent])
        {
            if (visited[val] == false)
            {
                q.push({val, level + 1});
                visited[val] = true;
            }
        }
    }
    if (find == false)
    {
        cout << -1 << endl;
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
    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        memset(visited, false, sizeof(visited));
        bfs(src, des);
    }

    return 0;
}