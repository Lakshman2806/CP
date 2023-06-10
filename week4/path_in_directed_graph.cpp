int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> adj(A + 1);
    for (int i = 0; i < B.size(); i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }

    vector<bool> vis(A + 1, false);
    vis[1] = true;

    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto &i : adj[x])
        {
            if (i == A)
            {
                return 1;
            }
            else
            {
                q.push(i);
            }
        }
    }
    return 0;
}