// 7-5 Detect Negative Cycle using Bellman Ford

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dis[N];

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main(int argc, char const *argv[])
{

    int n, e;
    cin >> n >> e;
    vector<Edge> Edge_List;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edge_List.push_back(Edge(u, v, c));
        // Edge_List.push_back(Edge(v, u, c)); // Undetected graph er jonno
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i < n - 1; i++) // O(V * E)
    {
        for (Edge ed : Edge_List)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;

    for (Edge ed : Edge_List)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Cycle Found. No Answer" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }

    // Printing all Edge
    // for(Edge ed : Edge_List)
    // {
    //     cout << ed.u << " " << ed.v << " " << ed.c << endl;
    // }

    return 0;
}
