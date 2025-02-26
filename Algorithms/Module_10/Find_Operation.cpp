// 10-3: Find Operation Implementation

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

void dsu_union(int node1, int node2)
{
    int leader_A = dsu_find(node1);
    int leader_B = dsu_find(node2);
    par[leader_A] = leader_B;
}

int main(int argc, char const *argv[])
{
    dsu_initialize(8);
    cout << dsu_find(1) << endl;
    dsu_union(1, 5);
    cout << dsu_find(1) << endl;
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << par[i] << " ";
    // }
    


    return 0;
}
