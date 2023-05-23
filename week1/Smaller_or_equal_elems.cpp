int Solution::solve(vector<int> &A, int B) {
    auto low = upper_bound(A.begin(),A.end(),B);
    return low-A.begin();
}
