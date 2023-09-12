class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int>mp;
        for(auto &c: s)
        {
            mp[c]++;
        }
        unordered_map<int,int>freq;
        for(auto&i: mp)
        {
            freq[i.second]++;
        }
        int to_be_deleted=0;
        for(int i = s.size(); i>0; i--)
        {
            if(freq[i]>1)
            {
                to_be_deleted +=freq[i]-1;
                freq[i-1]+=freq[i]-1;
            }
        }
        return to_be_deleted;
    }
};