/*

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
    ll eage_Cnt = 0;
    pair<ll, ll> pr;
    for (Edge ed : Edge_List)
    {
        ll leder_U = dsu_find(ed.u);
        ll leder_V = dsu_find(ed.v);
        if (leder_U == leder_V)
        {
            pr.first++;
        }
        else
        {
            dsu_union_by_size(leder_U, leder_V);
            pr.second += ed.w;
            eage_Cnt++;
        }
    }
    if (eage_Cnt != n - 1)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}

// DONE
// Accepted

*/

//---------------------------

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll par[N];
ll grp_sz[N];
void dsu_initialize(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_sz[i] = 1;
    }
}
ll dsu_find(ll node)
{
    if (par[node] == -1)
        return node;
    ll leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if (grp_sz[leaderA] > grp_sz[leaderB])
    {
        par[leaderB] = leaderA;
        grp_sz[leaderA] += grp_sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        grp_sz[leaderB] += grp_sz[leaderA];
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
int main()
{

    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    ll usedEdge = 0;
    pair<ll, ll> pr;

    for (Edge ed : edgeList)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            pr.first++;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            usedEdge++;
            pr.second += ed.w;
        }
    }

    if (usedEdge != n - 1)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}