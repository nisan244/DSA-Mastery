// 11-5 Kruskal_s Algorithm for MST Implementation

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        int leder = dsu_find(parent[node]);
        parent[node] = leder;
        return leder;
    }
}

void dsu_union_by_size(int node1, int node2)
{
    int leder_A = dsu_find(node1);
    int leder_B = dsu_find(node2);

    if (group_size[leder_A] > group_size[leder_B])
    {
        parent[leder_B] = leder_A;
        group_size[leder_A] += group_size[leder_B];
    }
    else
    {
        parent[leder_A] = leder_B;
        group_size[leder_B] += group_size[leder_A];
    }
}

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

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> Edge_List;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge_List.push_back(Edge(u, v, w));
    }
    sort(Edge_List.begin(), Edge_List.end(), cmp);
    int total_Cost = 0;
    for (Edge ed : Edge_List)
    {
        int leder_U = dsu_find(ed.u);
        int leder_V = dsu_find(ed.v);
        if (leder_U == leder_V)
        {
            continue;
        }
        dsu_union_by_size(ed.u, ed.v);
        total_Cost += ed.w;
    }
    cout << total_Cost << endl;

    // for(Edge ed : Edge_List)
    // {
    //     cout << ed.u << " " << ed.v << " " << ed.w << endl;
    // }
    return 0;
}
