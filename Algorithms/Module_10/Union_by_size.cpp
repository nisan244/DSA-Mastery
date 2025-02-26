// 10-5: Union and Union By Size

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int par[N];
int size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        size[i] = 1;
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

void dsu_union_by_size(int node1, int node2)    // O(α(n))
{
    int leader_A = dsu_find(node1);
    int leader_B = dsu_find(node2);
    if (size[leader_A] > size[leader_B])
    {
        par[leader_B] = leader_A;
        size[leader_A] += size[leader_B];
    }
    else
    {
        par[leader_A] = leader_B;
        size[leader_B] += size[leader_A];
    }
}

int main(int argc, char const *argv[])
{
    dsu_initialize(7);
    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3);
    dsu_union_by_size(4, 5);
    dsu_union_by_size(5, 6);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;


    return 0;
}
