bool isValid(int i, int j, int n)
{
    if((i>=n) || (i <0) || (j>=n) || (j < 0))
        return false;
    return true;
}

void helper(vector<vector<int>>&m, int n, int i, int j, vector<vector<bool>>&vis, string &path, vector<string>&ans)
{
    
    if(i==n-1 && j==n-1)
    {
        ans.push_back(path);
        return;
    }
    vis[i][j] = true;
    vector<pair<int,int>>neighbours{{1,0}, {-1,0}, {0,1}, {0, -1}};
    string dir ="DURL";
    for(int c = 0; c < 4; c++)
    {
        int x = i + neighbours[c].first;
        int y = j + neighbours[c].second;
        if(isValid(x,y,n) && (m[x][y]) && !vis[x][y])
        {
            path.push_back(dir[c]);
            helper(m, n, x, y, vis, path, ans);
            path.pop_back();
        }
    }
    vis[i][j] = false;
}

class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<bool>>vis(n, vector<bool>(n, false));
        string path;
        if(m[0][0]==0)
            return {};
        helper(m, n, 0, 0, vis, path, ans);
        return ans;
    }
};
