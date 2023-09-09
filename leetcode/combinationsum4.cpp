int Compute(vector<int>&dp, int i, vector<int>&nums, int target)
{
    if(i<0)
        return 0;
    if(i==0)
        return 1;
    if(dp[i]!=-1)
        return dp[i];
    dp[i] = 0;
    for(int j = 0; j < nums.size(); j++)
        dp[i] += Compute(dp, i-nums[j], nums, target);
    return dp[i];
}

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1, -1);
        return Compute(dp, target, nums, target);
    }
};