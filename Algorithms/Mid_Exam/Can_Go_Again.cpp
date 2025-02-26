#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 10;
ll dis[N];

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
    ll n, e;
    cin >> n >> e;
    vector<Edge> Edge_list;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        Edge_list.push_back(Edge(u, v, w));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    int s;
    cin >> s;

    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        dis[s] = 0;
        int y;
        cin >> y;
        for (int i = 1; i <= n - 1; i++)
        {
            for (Edge ed : Edge_list)
            {
                int u = ed.u;
                int v = ed.v;
                ll w = ed.w;
                if (dis[u] < 1e18 && dis[u] + w < dis[v])
                {
                    dis[v] = dis[u] + w;
                }
            }
        }

        for (Edge ed : Edge_list)
        {
            int u = ed.u;
            int v = ed.v;
            long long int w = ed.w;
            if (dis[u] < 1e18 && dis[u] + w < dis[v])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
        else if (dis[y] == 1e18)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[y] << endl;
        }
    }

    return 0;
}

// DONE
// Accepted