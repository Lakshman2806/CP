void Helper(vector<vector<string>>&ans, int l, int n, vector<string>&to, vector<bool>&cols)
{
    if(l==n)
    {
        ans.push_back(to);
        return;
    }
    string s(n, '.');
    for(int i = 0; i < n; i++)
    {
        if(!cols[i])
        {
            int row = l;
            int col = i;
            bool flag = false;
            row--;
            col--;
            while(row >=0 && col >=0)
            {
                if(to[row][col]=='Q')
                {
                    flag = true;
                    break;
                }
                row--;
                col--;
            }
            if(flag)    
                continue;
            row = l;
            col = i;
            row--;
            col++;
            while(row>=0 && col<n)
            {
                if(to[row][col]=='Q')
                {
                    flag = true;
                    break;
                }
                row--;
                col++;
            }
            if(flag)
                continue;
            s[i]='Q';
            cols[i]=true;
            to.push_back(s);
            Helper(ans, l+1, n, to, cols);
            to.pop_back();
            cols[i]=false;
            s[i]='.';
        }
    }
    return;
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<bool>cols(n, false);
        vector<string>to;
        Helper(ans,0,n,to,cols);
        return ans;
    }
};