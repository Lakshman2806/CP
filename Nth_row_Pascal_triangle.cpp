vector<int> Solution::getRow(int A) {
    vector<int> ans;
    int n = A;
    int prev = 1;
    ans.push_back(prev);
    for (int i = 1; i <= n; i++) {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = (prev * (n - i + 1)) / i;
        ans.push_back(curr);
        prev = curr;
    }
    return ans;
}
