/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int preIndex =0; 
 

TreeNode* Real(vector<int>&A, vector<int> &B, int start,int end)
{
    if(start > end)
    {
        return NULL;
    }
    TreeNode* x = new TreeNode(A[preIndex]);
    preIndex++;
    if(start==end)
    {
        return x;
    }
    
    int ind;
    for(int i =start;i<=end;i++)
    {
        if(B[i]==(x->val))
        {
            ind =i;
            break;
        }
    }
    
    x -> left = Real(A,B,start,ind-1);
    // if(x->val ==2)
    // {
    //     cout << x->left->val << endl;
    //     cout << preIndex << endl;
    // }
    x -> right = Real(A,B,ind +1, end);
    // if(x->val ==2)
    // {
    //     cout << x->right->val << endl;
    // }
    return x;
} 

 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    preIndex =0;
    int len = A.size();
    return Real(A,B,0,len-1);
}
