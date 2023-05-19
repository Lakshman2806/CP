class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> set;
        int ans = 0;
        for (int i = 0, j = 0; j < s.length(); j++)
        {
            while (set.find(s[j]) != set.end())
            {
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
