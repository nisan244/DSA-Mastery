#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visited[1010];
int level[1010];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int val : v[par])
        {
            if (visited[val] == false)
            {
                q.push(val);
                visited[val] = true;
                level[val] = level[par] + 1;
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

    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    bfs(src);
    for (int i = 0; i < n; i++)
    {
        if (level[i] != -1)
        {
            cout << i << " " << level[i] << endl;
        }
    }

    
    return 0;
}