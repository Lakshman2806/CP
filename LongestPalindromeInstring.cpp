class Solution{
    private:
        int Compute(vector<vector<int>>&dp, int i, int j,string &A)
        {
            if(dp[i][j]!=-1)
                return dp[i][j];
            if(i==j)
            {
                dp[i][j] = 1;
                return dp[i][j];
            }
            if(i>=A.size())
                return 0;
            if(j<0)
            {
                return 0;
            }
            if(i>j)
                return 0;
            if(A[i]==A[j])
            {
                dp[i][j] = Compute(dp,i+1,j-1,A)+2;
            }
            else{
                dp[i][j] = max(Compute(dp,i+1,j,A),Compute(dp,i,j-1,A));
            }
            return dp[i][j];
        }
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n = A.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        return Compute(dp,0,n-1,A);
    }
};
