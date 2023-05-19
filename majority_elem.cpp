int Solution::majorityElement(const vector<int> &A) {
    map<int,int>mp;
    for(auto i: A)
    {
        mp[i]++;
    }
    int n = A.size();
    for(auto i:A)
    {
        if(2*mp[i]>=n)
        {
            return i;
        }
    }
}
