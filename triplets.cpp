 bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i =0;i<n-1;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0)
                {
                    return true;
                }
                if(sum>0)
                {
                    k--;
                }
                if(sum <0)
                {
                    j++;
                }
            }
        }
        return false;
    }
