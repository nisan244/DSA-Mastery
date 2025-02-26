#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010]; // O(V^2) -> worest case
bool visited[1010];  // O(V)
// Time complexity : O(V+E) -> v = Node/vertex, E = Edge
// Space complexity : O(V) -> v = Node/vertex

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout << p << " ";
        for (int x : v[p])
        {
            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
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