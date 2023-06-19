int Solution::solve(int A, vector<vector<int> > &B) {
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < B.size(); i++)
    {
        edges.push_back(make_pair(B[i][2], make_pair(B[i][0], B[i][1])));
    }
    sort(edges.begin(), edges.end());
    vector<int> parent(A + 1);
    for (int i = 0; i <= A; i++)
    {
        parent[i] = i;
    }
    int ans = 0;
    for (int i = 0; i < edges.size(); i++)
    {
        int x = edges[i].second.first;
        int y = edges[i].second.second;
        int w = edges[i].first;
        while (parent[x] != x)
        {
            x = parent[x];
        }
        while (parent[y] != y)
        {
            y = parent[y];
        }
        if (x != y)
        {
            ans += w;
            parent[x] = y;
        }
    }
    return ans;
}
