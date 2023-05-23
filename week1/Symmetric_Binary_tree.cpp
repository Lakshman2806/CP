/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool checkSymmetrical(TreeNode* Aleft, TreeNode* Aright)
{
    if(Aleft==NULL && Aright==NULL)
    {
        return true;
    }
    if(Aleft == NULL || Aright == NULL)
    {
        return false;
    }
    if((Aleft -> val == Aright -> val) && checkSymmetrical(Aleft->left, Aright->right) && checkSymmetrical(Aleft->right, Aright
    ->left))
        return true;
    return false;
}

int Solution::isSymmetric(TreeNode* A) {
    TreeNode* x = A;
    // invert(x);
    if(checkSymmetrical(A->left, A->right))
        return 1;
    return 0;
}

