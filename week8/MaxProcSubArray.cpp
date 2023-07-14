int func(vector<int>A)
{
    vector<int>mul(A.size());
    mul[0]=A[0];
    for(int i =1;i<A.size();i++)
    {
        mul[i] = mul[i-1] * A[i];
    }
    for(int i =0;i<A.size();i++)
    {
        A[i] = mul[i];
    }
    int l = 0;
    int r = 0;
    int ans = INT_MIN;
    for(;r<A.size()-1;r++)
    {
        if(A[r]*A[r+1]<0)
        {
            if(A[r]<0)
            {
                if(l!=r)
                {
                    ans = max(ans,A[r]/A[l]);
                }
            }
            else{
                ans = max(ans,A[r]);
            }
            l = r+1;
        }
    }
    if(l!=r)
    {
        if(A[r]<0)
        {
            ans = max(ans,A[r]/A[l]);
        }
        if(A[r]>0)
        {
            ans = max(ans,A[r]);
        }
    }
    else{
        ans = max(ans,A[r]);
    }
    return ans;
    
}



int Solution::maxProduct(const vector<int> &a) {
    vector<int>x;
    int ans = INT_MIN;
    for(int i = 0;i<a.size();i++)
    {
        if(!a[i])
        {
            ans = max(ans,0);
            if(x.size())
            ans = max(ans,func(x));
            x.clear();
        }
        else{
            x.push_back(a[i]);
        }
    }
    if(x.size())
    ans = max(ans,func(x));
    return ans;
}

