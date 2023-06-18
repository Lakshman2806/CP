/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    if (A == NULL) {
        return ans;
    }
    queue<TreeNode*> q;
    q.push(A);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            TreeNode* curr = q.front();
            q.pop();
            if (i == n - 1) {
                ans.push_back(curr->val);
            }
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
    return ans;
    // What is the right view of a binary tree?
    // The right view of a binary tree is the set of nodes visible when the tree is seen from the right side.
}