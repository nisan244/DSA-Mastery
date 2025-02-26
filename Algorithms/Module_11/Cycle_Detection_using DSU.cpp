// 11-2 Cycle Detection using DSU Implementation

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

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool Cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leder_A = dsu_find(a);
        int leder_B = dsu_find(b);
        if (leder_A == leder_B)
        {
            Cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }

    if (Cycle)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        cout << "Cycle not Found" << endl;
    }

    return 0;
}
