// 14-4 Dijkstra Path Printing
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi pair<ll, ll>

const ll N = 1e5 + 10;
vector<pi> v[N];
ll dis[N];
ll par[N];

class cmp
{
public:
    bool operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll s)
{
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({s, 0});
    dis[s] = 0;
    while (!pq.empty())
    {
        pi parent = pq.top();
        pq.pop();
        ll parent_Node = parent.first;
        ll parent_Cost = parent.second;

        for (pi child : v[parent_Node])
        {
            ll child_Node = child.first;
            ll child_Cost = child.second;
            if (parent_Cost + child_Cost < dis[child_Node])
            {
                dis[child_Node] = parent_Cost + child_Cost;
                pq.push({child_Node, dis[child_Node]});
                par[child_Node] = parent_Node;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
        par[i] = -1;
    }

    dijkstra(1);
    if (dis[n] == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        ll x = n;
        vector<ll> path;
        while (x != -1)
        {
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(), path.end());
        for (ll val : path)
        {
            cout << val << " ";
        }
    }

    return 0;
}


/*

INPUT :
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

OUTPUT:
1 4 3 5

*/
