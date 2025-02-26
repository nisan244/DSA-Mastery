#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll N = 1e5 + 10;
ll parent[N];
ll group_size[N];

void dsu_initialize(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

ll dsu_find(ll node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        ll leder = dsu_find(parent[node]);
        parent[node] = leder;
        return leder;
    }
}

void dsu_union_by_size(ll node1, ll node2)
{
    ll leder_A = dsu_find(node1);
    ll leder_B = dsu_find(node2);

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
    ll u, v, w;
    Edge(ll u, ll v, ll w)
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
        ll u, v, w;
        cin >> u >> v >> w;
        Edge_List.push_back(Edge(u, v, w));
    }
    sort(Edge_List.begin(), Edge_List.end(), cmp);
    ll total_Cost = 0;
    ll eage_Cnt = 0;
    for (Edge ed : Edge_List)
    {
        ll leder_U = dsu_find(ed.u);
        ll leder_V = dsu_find(ed.v);
        if (leder_U == leder_V)
        {
            continue;
        }
        dsu_union_by_size(ed.u, ed.v);
        total_Cost += ed.w;
        eage_Cnt++;
    }

    if (eage_Cnt != n - 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << total_Cost << endl;
    }

    return 0;
}

// DONE
// Accepted