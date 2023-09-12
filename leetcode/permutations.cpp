void Helper(vector<vector<int>>&ans, int i, vector<int>&nums)
{
    if(i==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int k = i; k < nums.size();k++)
    {
        swap(nums[i], nums[k]);
        Helper(ans, i+1, nums);
        swap(nums[i], nums[k]);
    }
    return;
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        Helper(ans, 0, nums);
        return ans;
    }
};