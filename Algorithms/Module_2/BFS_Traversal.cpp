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

    while (!q.empty())  // O(n^2)
    {
        int par = q.front();
        q.pop();
        cout << par << " ";
        for (int child : v[par])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
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

/*

INPUT:
5 6
0 1
1 2
0 4
1 3
2 0
3 4
0

OUTPUT:
0
1
4
2
3

*/


//----------------------------------

#include <bits/stdc++.h>
using namespace std;

vector<int> v[1010];
bool vis[1010];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << endl;
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
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
    memset(vis, false, sizeof(vis));
    int src;
    cin >> src;
    bfs(src);

    return 0;
}
