class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto &i: nums)
            s.insert(i);
        int ans = 0;
        for(auto &i: s)
        {
            if(s.find(i-1)==s.end())
            {
                int count = 1;
                int x = i+1;
                while(s.find(x)!=s.end())
                {
                    x++;
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};