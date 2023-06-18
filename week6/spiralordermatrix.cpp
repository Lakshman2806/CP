vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> ans;
    int m = A.size();
    int n = A[0].size();
    int i = 0, j = 0;
    int k = 0;
    int l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            ans.push_back(A[k][i]);
        }
        k++;
        for (i = k; i < m; i++)
        {
            ans.push_back(A[i][n - 1]);
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                ans.push_back(A[m - 1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                ans.push_back(A[i][l]);
            }
            l++;
        }
    }
    return ans;
}
