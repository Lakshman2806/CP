#include <list>


vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    list<int>ans;
    int x = A[n-1] + 1;
    ans.push_front(x%10);
    int carry = x/10;
    
    for(int i = n-2 ; i>= 0;i--)
    {
        x = A[i] + carry;
        ans.push_front(x%10);
        carry = x/10;
    }
    if(carry)
    {
        ans.push_front(carry);
    }
    vector<int>xt;
    bool flag = false;
    for(auto &i: ans)
    {
        if(i!=0 && !flag)
        {
            flag = true;
            xt.push_back(i);
        }
        else if(flag)
        {
            xt.push_back(i);
        }
    }
    return xt;
}
