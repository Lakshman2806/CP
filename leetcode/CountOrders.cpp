
class Solution {
public:
    int countOrders(int n) {
        int ans = 1;
        int mod = 1e9+7;
        for(int i = 2; i <= n; i++)
        {
            ans = (1LL * ans * i)%mod;
            ans = (1LL * ans * (2*i-1))%mod;
        }
        return ans;
    }
};