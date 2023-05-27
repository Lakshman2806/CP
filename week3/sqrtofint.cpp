int Solution::sqrt(int A) {
    if(A==0)
        return 0;
    
    int left = 1;
    int right = A;
    int ans = 0;

    while(left<=right)
    {
        int mid = (right - left)/2 + left;
        if(mid == A/mid)
        {
            return mid;
        }
        else if(mid < A/mid)
        {
            left = mid + 1;
            ans = mid;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
