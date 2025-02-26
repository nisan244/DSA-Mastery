#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int group_size[N];

void dsu_intialize(int n)
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
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leader_A = dsu_find(node1);
    int leader_B = dsu_find(node2);
    if (group_size[leader_A] > group_size[leader_B])
    {
        parent[leader_B] = leader_A;
        group_size[leader_A] += group_size[leader_B];
    }
    else
    {
        parent[leader_A] = leader_B;
        group_size[leader_B] += group_size[leader_A];
    }
}

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    dsu_intialize(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leader_A = dsu_find(a);
        int leader_B = dsu_find(b);
        if (leader_A != leader_B)
        {
            dsu_union_by_size(a, b);
        }
    }
    vector<int> leader;
    for (int i = 1; i <= n; i++)
    {
        leader.push_back(dsu_find(i));
    }

    sort(leader.begin(), leader.end());
    leader.erase(unique(leader.begin(), leader.end()), leader.end());

    cout << leader.size() - 1 << endl;
    for (int i = 0; i < leader.size() - 1; i++)
    {
        cout << leader[i] << " " << leader[i + 1] << endl;
    }

    return 0;
}

/*

INPUT:
4 2
1 2
3 4

OUTPUT:
1
2 4

-----------------

INPUT:
7 4
1 2
3 4
5 6
6 7

OUTPUT:
2
2 4
4 6

*/