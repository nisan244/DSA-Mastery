class Solution
{
public:
    bool valid(int n, int m, int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
        {
            return false;
        }
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        queue<pair<int, int>> q;
        bool visi[n][m];
        memset(visi, false, sizeof(visi));
        q.push({sr, sc});
        visi[sr][sc] = true;
        int oldcolor = image[sr][sc];
        
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int a = p.first, b = p.second;
            if (oldcolor == image[a][b])
            {
                image[a][b] = color;
            }
            for (int i = 0; i < 4; i++)
            {
                int ci = a + d[i].first;
                int cj = b + d[i].second;
                if (valid(n, m, ci, cj) == true && visi[ci][cj] == false && image[ci][cj] == oldcolor)
                {
                    q.push({ci, cj});
                    visi[ci][cj] = true;
                }
            }
        }
        return image;
    }
};