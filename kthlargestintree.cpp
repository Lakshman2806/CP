void revTrav(Node * root, int &k, int &ans, int &count)
{
    if(root==NULL)
        return;
    // int r = revTrav(root->right, k);
    // if(r!=-1)
    //     return r;
    // k--;
    // if(k==0)
    //     return root->data;
    // return revTrav(root->left, k);
    
    revTrav(root->right, k, ans, count);
    count++;
    if(k==count)
        ans = root->data;
    revTrav(root->left, k, ans, count);
}


class Solution
{
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans;
        int count = 0;
        revTrav(root, K, ans, count);
        return ans;
    }
};