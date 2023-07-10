int Solution::maximalRectangle(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int ans = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        dp[i][0] = A[i][0];
        for(int j = 1; j < m; j++){
            if(A[i][j] == 1){
                dp[i][j] = dp[i][j-1] + 1;
            }
        }
    }
    for(int i = 0; i < m; i++){
        int j = 0;
        stack<int> s;
        while(j < n){
            if(s.empty() || dp[j][i] >= dp[s.top()][i]){
                s.push(j);
                j++;
            }
            else{
                int top = s.top();
                s.pop();
                int area = dp[top][i] * (s.empty() ? j : j - s.top() - 1);
                ans = max(ans, area);
            }
        }
        while(!s.empty()){
            int top = s.top();
            s.pop();
            int area = dp[top][i] * (s.empty() ? j : j - s.top() - 1);
            ans = max(ans, area);
        }
    }
    return ans;
}
