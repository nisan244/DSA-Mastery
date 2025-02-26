// 6-4 Dijkstra Naive Implementation

#include <bits/stdc++.h>
using namespace std;
//----------------------- Com : O(V * E)

const int N = 100;
int dis[N];
vector<pair<int, int>> v[N];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        // for (int i = 0; i < v[node].size(); i++)
        // {
        //     pair<int, int> child = v[node][i];
        // }
        for (pair<int, int> child : v[node])
        {
            int child_Node = child.first;
            int child_Cost = child.second;

            if (cost + child_Cost < dis[child_Node])
            {
                // Path Relax
                dis[child_Node] = cost + child_Cost;
                q.push({child_Node, dis[child_Node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}
