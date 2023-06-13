vector<int> nextLargesttoleft(vector<int> &nums)
{
    vector<int> ans(nums.size(),-1);
    stack<int> st;
    int k = nums.size();
    for(int i = 0; i < k; i++)
    {
        while(!st.empty() && nums[st.top()] <= nums[i])
        {
            // ans[st.top()] = i;
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else{
            st.push(i);
        }
    }
    return ans;
}
vector<int> nextLargest(vector<int> &nums)
{
    // Should output an array that contains the largest element to the right of each element in the given array
    vector<int> ans(nums.size(),-1);
    stack<int> st;
    int k = nums.size();
    for(int i = k-1; i>=0 ;i--)
    {
        while(!st.empty() && nums[st.top()] <= nums[i])
        {
            // ans[st.top()] = i;
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else{
            st.push(i);
        }
    }
    return ans;
}


class Solution {
public:
    int trap(vector<int>& nums) {
        int ans = 0;
    vector<int> nxt = nextLargest(nums);
    vector<int> lftnxt = nextLargesttoleft(nums);
    for(int i = 0; i < nums.size(); i++)
    {
        if (nxt[i] != -1 && lftnxt[i] != -1)
        {
            ans += min(nums[nxt[i]], nums[lftnxt[i]]) - nums[i];
        }
    }
    return ans;
    }
};
