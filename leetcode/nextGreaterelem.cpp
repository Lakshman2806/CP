class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int>st;
        for(int i = 0; i < nums2.size(); i++)
        {
            if(st.empty() || (st.top()>=nums2[i]))
                st.push(nums2[i]);
            else{
                while(!st.empty() && (st.top()< nums2[i]))
                {
                    mp[st.top()] = nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        while(!st.empty())
        {
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int>ans;
        for(auto &i: nums1)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};