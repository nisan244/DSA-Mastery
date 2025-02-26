#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
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

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    dsu_initialize(n);
    vector<pair<int, int>> dlt;
    vector<pair<int, int>> create;
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leder_A = dsu_find(a);
        int leder_B = dsu_find(b);
        if (leder_A == leder_B)
        {
            dlt.push_back({a, b});
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    cout << dlt.size() << endl;
    for (int i = 2; i <= n; i++)
    {
        int leder_A = dsu_find(1);
        int leder_B = dsu_find(i);
        if (leder_A != leder_B)
        {
            create.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }
    for (int i = 0; i < dlt.size(); i++)
    {
        cout << dlt[i].first << " " << dlt[i].second << " " << create[i].first << " " << create[i].second << endl;
    }

    return 0;
}

// DONE
// Accepted

/*

INPUT:
7
1 2
2 3
3 1
4 5
5 6
6 7

OUTPUT:
1
3 1 1 4

------------------------------------

INPUT:
2
1 2

OUTPUT:
0

*/