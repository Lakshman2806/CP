int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> adj(A+1);

    for(int i =0; i< B.size();i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    vector<int> visited(A+1,0);
    int count =0;

    for(int i =1; i<=A;i++)
    {
        if(!visited[i])
        {
            count++;
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            while(!q.empty())
            {
                int x = q.front();
                q.pop();
                for(int j =0; j< adj[x].size();j++)
                {
                    if(!visited[adj[x][j]])
                    {
                        visited[adj[x][j]] = 1;
                        q.push(adj[x][j]);
                    }
                }
            }
        }
    }

    return count;
}
