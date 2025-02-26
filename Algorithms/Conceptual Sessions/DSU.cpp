#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int size[N];

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    if (find(a) != find(b))
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;      // Choto size er tree ke boro size er tree te assign kora holo
        size[a] += size[b]; // Boro size er tree er value increase kora holo
    }
}
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i == find(i))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

/*

INPUT:
4 2
1 2
3 4

OUTPUT:
2

*/