int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int ind=-1;
    for(int i =0;i<A.size();i++)
    {
        if(A[i][0]>=B)
        {
            if(A[i][0]==B)
                return 1;
            ind =i;
            break;
        }
    }
    if(ind ==-1)
    {
        int l = A.size();
        for(int i =0;i<A[0].size();i++)
        {
            if(A[l-1][i]==B)
                return 1;
        }
        return 0;
    }
    ind--;
    if(ind==-1)
        return 0;
    for(int i =0;i<A[0].size();i++)
    {
        if(A[ind][i]==B)
            return 1;
    }
    return 0;
}
