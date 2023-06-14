class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int no_of_zeroes =0;
        for(auto &i: nums)
        {
            if(!i)
                no_of_zeroes++;
        }
        int k = nums.size() - no_of_zeroes;
        int ptr = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i])
            {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        for(int i = k; i<nums.size();i++)
        {
            nums[i] = 0;
        }
    }
};
