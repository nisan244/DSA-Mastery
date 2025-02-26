// 10-7: Union By Rank Implementation

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int par[N];
int size[N];
int level[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        size[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int node) // O(log N)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_level(int node1, int node2)
{
    int leader_A = dsu_find(node1);
    int leader_B = dsu_find(node2);
    if (level[leader_A] > level[leader_B])
    {
        par[leader_B] = leader_A;
    }
    else if (level[leader_B] > level[leader_A])
    {
        par[leader_A] = leader_B;
    }
    else
    {
        par[leader_A] = leader_B;
        level[leader_B]++;
    }
}

int main(int argc, char const *argv[])
{
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;

    return 0;
}
