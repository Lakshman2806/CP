int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>mp;
    mp[0]++;
    int ans =0;
    int x = 0;
    for(int i = 0; i < A.size(); i++)
    {
        x ^= A[i];
        int cal = x^B;
        ans += mp[cal];
        mp[x]++;
    }
    return ans;
}