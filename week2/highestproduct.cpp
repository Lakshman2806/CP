int Solution::maxp3(vector<int> &A) {
    vector<int>x;
    vector<int>y;
    for(auto &i:A)
    {
        if(i>=0)
        {
            x.push_back(i);
        }
        else{
            y.push_back(-1*i);
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    if(x.size()>=3 && y.size()>=2)
    {
        int n = x.size(), m = y.size();
        int cmp1 = x[n-1] * x[n-2] * x[n-3];
        int cmp2 = y[m-1] * y[m-2] * x[n-1];
        return(max(cmp1,cmp2));
    }
    else if(x.size()>=3)
    {
        int n = x.size();
        return x[n-1] * x[n-2] * x[n-3];
    }
    else{
        if(x.size()>0)
        {
            int m = y.size();
            if(m>1)
                return x[x.size()-1] * y[m-1] * y[m-2];
            else{
                return -1*x[0]*x[1]*y[0];
            }
        }
        else{
            return -1* y[0] * y[1] * y[2];
        }
    }
}
