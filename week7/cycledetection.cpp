bool DFS(vector<vector<int>>&pre, vector<bool>&done, vector<bool>&vis, int curr)
{
   if(vis[curr])
    return true;
    vis[curr] = true;
    done[curr] = true;
    for(auto &i : pre[curr])
    {
        if(DFS(pre,done,vis,i))
            return true;
    }
    vis[curr] = false;
    return false;
}


int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<vector<int>>pre(A+1);
    for(int i=0;i<C.size();i++)
    {
        pre[C[i]].push_back(B[i]);
    }
    vector<bool>done(A+1,false);
    vector<bool>vis(A+1,false);
    
    for(int i =1;i<=A;i++)
    {
        if(!done[i])
        {
            if(DFS(pre,done,vis,i))
                return 0;
        }
    }
    return 1;
}
