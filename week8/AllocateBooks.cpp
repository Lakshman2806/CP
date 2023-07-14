int Solution::books(vector<int> &A, int B) {
    int sum =0;
    int maxl =0;
    for(auto &i:A)
    {
        sum+=i;
        if(maxl < i)
            maxl = i;
    }
    int low = maxl;
    int max = sum;
    int ans=-1;
    if(A.size()<B)
        return -1;
    // ans lies in the range of low, max
    // we binary search for the ans
    while(low<=max)
    {
        int mid = (low+max)/2;
        // suppose the mid is the max value a student can read
        // We should calculate the no of students like this
        int l =0;
        int no =1;
        for(int i =0;i<A.size();i++)
        {
            l += A[i];
            if(l>mid)
            {
                // The max capacity of a student has reached, therefore we should go to the next student
                no++;
                l = A[i];
            }
        }
        // The no of students has been calculated. Now if it is less than or equal to B then a lesser value than mid can exist
        // satisfying this property.
        if(no<=B)
        {
            ans = mid;
            max = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
