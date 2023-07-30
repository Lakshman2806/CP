void ParentMap(unordered_map<Node *, Node *> &par, Node *root)
{
    if (root->left)
    {
        par[root->left] = root;
        ParentMap(par, root->left);
    }
    if (root->right)
    {
        par[root->right] = root;
        ParentMap(par, root->right);
    }
}

Node *FindTarget(Node *root, int target)
{
    if (root->data == target)
    {
        return root;
    }
    if (root->left)
    {
        Node *temp = FindTarget(root->left, target);
        if (temp)
        {
            return temp;
        }
    }
    if (root->right)
    {
        Node *temp = FindTarget(root->right, target);
        if (temp)
        {
            return temp;
        }
    }
    return NULL;
}



class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        unordered_map<Node *, Node *> par;
        ParentMap(par, root);
        par[root] = NULL;
        Node *targetNode = FindTarget(root, target);
        int count = -1;
        queue<Node *> q;
        q.push(targetNode);
        unordered_map<Node *, bool> visited;
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                Node *top = q.front();
                q.pop();
                if (visited[top])
                {
                    continue;
                }
                visited[top] = true;
                if (top->right)
                {
                    q.push(top->right);
                }
                if (top->left)
                {
                    q.push(top->left);
                }
                if (par[top])
                {
                    q.push(par[top]);
                }
            }
            count++;
        }
        return count-1>0 ? count-1 : 0;
    }
};
