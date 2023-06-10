vector<int> Solution::solve(string A) {
    map<char,int>mp;
    map<char,bool>ll;
    
    for(auto&i:A)
    {
        mp[i]++;
    }
    vector<int>ans;
    for(auto&i:A)
    {
        if(ll[i])
        {
            continue;
        }
        else{
            ans.push_back(mp[i]);
            ll[i] = true;
        }
    }
    return ans;
}
