class Solution {
public:
    int maxProduct(vector<int>& arr) {
      int max_ending_here =arr[0];
			int min_ending_here = arr[0];
			int ans = arr[0];
			for(int i = 1; i < arr.size(); i++)
			{
				int temp = max({arr[i], arr[i]*min_ending_here, arr[i]*max_ending_here});
				min_ending_here = min({arr[i], arr[i]*min_ending_here, arr[i]*max_ending_here});
				max_ending_here = temp;
				ans = max(ans, max_ending_here);
			}
			return ans;
    }
};