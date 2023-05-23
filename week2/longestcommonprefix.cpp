string Solution::longestCommonPrefix(vector<string> &A) {
    string ans = "";
    int n = A.size();
    int min_len = INT_MAX;
    for(int i =0; i< n; i++){
        min_len = min(min_len, (int)A[i].size());
    }
    for(int i =0; i< min_len; i++){
        char curr = A[0][i];
        for(int j =1; j< n; j++){
            if(A[j][i] != curr){
                return ans;
            }
        }
        ans += curr;
    }
    return ans;
}
