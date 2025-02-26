#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool visi[1010];

void dfs(int src)
{
    cout << src << " ";
    visi[src] = true;
    for (int child : v[src])
    {
        if (!visi[child])
        {
            dfs(child);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visi, false, sizeof(visi));
    int component_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visi[i])
        {
            dfs(i);
            component_count++; // for component count
        }
    }
    cout << endl << "Component -> "
         << component_count << endl;

    return 0;
}