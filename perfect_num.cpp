class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 0;
        for(long long i = 1; i*i<=N; i++)
        {
            if(N%i==0)
            {
                long long other = N/i;
                sum += (i+(other*(other!=i)));
            }
        }
        // cout << sum << endl;
        return (sum==2*N);
    }
};