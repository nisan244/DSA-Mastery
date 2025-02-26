#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;  // 10^6 + 10
vector<int> v[N];
vector<int> ans;
bool visi[N];

void bfs(int src, int level)
{
    queue<pair<int, int>> q;
    q.push({src, level});
    visi[src] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;
        if (level == 1)
        {
            ans.push_back(parent);
        }
        for (int child : v[parent])
        {
            if (!visi[child])
            {
                q.push({child, level + 1});
                visi[child] = true;
            }
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

    int q;
    cin >> q;
    while (q--)
    {
        ans.clear();
        int src;
        cin >> src;
        memset(visi, false, sizeof(visi));
        bfs(src, 0);
        sort(ans.begin(), ans.end(), greater<>());
        if (ans.empty())
        {
            cout << -1;
        }
        else
        {
            for (int val : ans)
            {
                cout << val << " ";
            }
        }
        cout << endl;
    }


    return 0;
}