class Solution
{
public:
    bool visi[110][110];
    bool valid(int i, int j, int n, int m)
    {
        if (i <= 0 || i >= n - 1 || j <= 0 || j >= m - 1)
        {
            return false;
        }
        return true;
    }

    void bfs(int i, int j, vector<vector<int>> &grid, int n, int m)
    {
        queue<pair<int, int>> q;
        vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
        q.push({i, j});
        visi[i][j] = true;
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int a = p.first, b = p.second;
            for (int i = 0; i < 4; i++)
            {
                int ci = a + d[i].first;
                int cj = b + d[i].second;
                if (valid(ci, cj, n, m) == true && visi[ci][cj] == false && grid[ci][cj] == 0)
                {
                    q.push({ci, cj});
                    visi[ci][cj] = true;
                }
            }
        }
    }

    int closedIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        memset(visi, false, sizeof(visi));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (valid(i, j, n, m) == true && grid[i][j] == 0 && visi[i][j] == false)
                {
                    bfs(i, j, grid, n, m);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};