vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n = A.size();
    long long int sum = 0;
    long long int sumsq = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (long long int)A[i];
        sumsq += (long long int)A[i] * (long long int)A[i];
    }
    long long int diff = (n * (n + 1) / 2) - sum;
    long long int diff2 = ((n * (n + 1) * (2 * n + 1)) / 6) - sumsq;
    long long int sum1 = diff2 / diff;
    int repeated = (sum1 - diff) / 2;
    int missing = (sum1 + diff) / 2;
    vector<int> ans;
    ans.push_back(repeated);
    ans.push_back(missing);
    return ans;
}
