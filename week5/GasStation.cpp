int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    int start = 0;
    int sum = 0;
    int total = 0;
    for(int i =0;i<n;i++)
    {
        sum += A[i] - B[i];
        total += A[i] - B[i];
        if(sum < 0)
        {
            start = i+1;
            sum = 0;
        }
    }
    if(total < 0)
    {
        return -1;
    }
    return start%n;
}
