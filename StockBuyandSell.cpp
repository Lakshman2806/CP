 int stockBuyAndSell(int n, vector<int> &a) {
        // code here
        int ans =0;
        int prev = 0;
        for(int i =1; i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                continue;
            }
            else{
                ans+= a[i-1] - a[prev];
                prev = i;
            }
        }
        ans += a[n-1] - a[prev];
        return ans;
    }   
