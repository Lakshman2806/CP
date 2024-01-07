class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int left = 0;
        int right = 0;
        
        for(int i = 0; i < N; i++)
            right+=arr[i];
        int ans = right;
        while(right >= left)
        {
            int mid = ((right-left)/2) + left;
            int sum = 0;
            int k = 0;
            bool flg = false;
            for(int i = 0; i < N; i++)
            {
                if(sum + arr[i]> mid)
                {
                    if(sum==0)
                    {
                        left = mid+1;
                        flg = true;
                        break;
                    }
                    else{
                        sum = 0;
                        if(sum+arr[i]>mid)
                        {
                            left = mid+1;
                            flg = true;
                            break;
                        }
                        sum= arr[i];
                        k++;
                    }
                }
                else{
                    sum+=arr[i];
                }
            }
            if(flg)
                continue;
            if(sum)
            {
                k++;
            }
            if(k<K )
            {
                 ans = min(ans, mid);
                right = mid-1;
            }
            else if(k > K)
            {
                left = mid+1;
            }
            else{
                ans = min(ans, mid);
                right = mid-1;
            }
        }
        return ans;
    }
};
