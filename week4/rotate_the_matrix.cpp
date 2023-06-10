void Solution::rotate(vector<vector<int> > &A) {
    // Take the transpose and reverse the row vectors.
    // Pretty cool way to do this
    int n = A.size();
    int m = A[0].size();
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(A[i].begin(),A[i].end());
    }
}
