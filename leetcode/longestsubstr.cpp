class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int n = s.size();
        unordered_map<char, int>mp;
        int ans = 0;
        for(int r = 0; r < n; r++)
        {
            if(mp.find(s[r])!=mp.end())
            {
                // cout << r << " " << l <<endl;
                ans = max(ans, r-l);
                while(l<=r && (mp.find(s[r])!=mp.end()))
                {
                    mp.erase(s[l]);
                    l++;
                }
                // cout << r << " " << l <<endl;
            }
            mp[s[r]]=r;
        }
        ans = max(ans, n-l);
        return ans;
    }
};