//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> ans;
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        bool visi[V];
        memset(visi, false, sizeof(visi));
        dfs(adj, visi, 0);
        return ans;
    }
    void dfs(vector<int> adj[], bool visi[], int val)
    {
        ans.push_back(val);
        visi[val] = true;
        for (int child : adj[val])
        {
            if (!visi[child])
            {
                dfs(adj, visi, child);
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

        return 0;
}