#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visited[1010];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << " ";
        for (int val : v[par])
        {
            if (visited[val] == false)
            {
                q.push(val);
                visited[val] = true;
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
    bfs(src);


    return 0;
}

// Input --->
// 0 1
// 0 2
// 4 3
// 3 5
// 0 6
// 0 7
// 0 9
// 0 10
// 0 11
// 0 12
// 0 4
// 4 6
// 6 5
// 4 12
// 12 1