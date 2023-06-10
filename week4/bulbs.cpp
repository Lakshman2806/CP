int Solution::bulbs(vector<int> &A) {
    int ans=0;
    bool flag = false;
    for(auto &i:A)
    {
        if(i==1)
        {
            if(flag)
            {
                ans++;
                flag = false;
            }
            else{
                continue;
            }
        }
        else{
            flag = true;
        }
    }
    ans*=2;
    if(flag)
    {
        ans++;
    }
    return ans;
}
    