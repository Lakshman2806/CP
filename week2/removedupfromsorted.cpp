int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int>ans;
    int size = A.size();
    int prev;
    for(int i =0;i <A.size();i++)
    {
        if(i==0)
        {
            ans.push_back(A[i]);
            prev = A[i];
            continue;
        }
        else{
           while(prev==A[i])
            i++;
            if(i<size)
            {
                prev = A[i];
                ans.push_back(A[i]); 
            }
        }
    }
    int rt = ans.size();
    // A = ans;
    // cout << rt << endl;
    A.clear();
    A = ans;
    return rt;
}
