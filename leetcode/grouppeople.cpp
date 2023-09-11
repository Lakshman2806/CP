class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>>mp;
        vector<vector<int>>ans;
        for(int i = 0; i < groupSizes.size(); i++)
        {
            int n = groupSizes[i];
            if(mp[n].size()==n)
            {
                ans.push_back(mp[n]);
                mp[n].clear();
                mp[n].push_back(i);
            }
            else{
                mp[n].push_back(i);
            }
        }
        for(auto &i: mp)
        {
            if(i.second.size()==i.first)
                ans.push_back(i.second);
        }
        return ans;
    }
};