int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {   
     int i = 0, j = 0, k = 0;
    int ans = INT_MAX;
    while (i < A.size() && j < B.size() && k < C.size())
    {
        int x = A[i];
        int y = B[j];
        int z = C[k];
        int mn = min(x, min(y, z));
        int mx = max(x, max(y, z));
        ans = min(ans, mx - mn);
        if (mn == x)
        {
            i++;
        }
        else if (mn == y)
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return ans;
}
