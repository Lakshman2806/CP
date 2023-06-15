int Kadane(vector<int> &nums)
{
  int ans = INT_MIN;
  int local_max = 0;
  for(int i =0; i< nums.size() ; i++)
  {
    local_max = max(nums[i], local_max + nums[i]);
    ans = max(ans, local_max);
  }
  return ans;
}
    
