int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans = 0;
    for(int i =0; i < A.size() ;i++)
    {
        int cmp = (A[i] - B[i] >=0) ? (A[i] - B[i]) : (B[i] - A[i]);
        // cout << cmp << endl;
        if(ans <= cmp)
        {
            ans = cmp;
        }
    }
    return ans;
}
