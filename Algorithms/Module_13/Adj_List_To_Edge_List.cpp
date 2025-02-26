// 13-9 Adjacency List to Edge List

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    vector<Edge> edge_List;
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : v[i])
        {
            int child_Node = child.first;
            int cost = child.second;
            edge_List.push_back(Edge(i, child_Node, cost));
        }
    }

    for (Edge edge : edge_List)
    {
        cout << edge.u << " " << edge.v << " " << edge.w << endl;
    }

    return 0;
}

/*

INPUT:
4 5
0 1 10
1 2 11
2 3 12
3 2 12
3 1 13

OUTPUT:
0 1 10
1 2 11
2 3 12
3 2 12
3 1 13

*/