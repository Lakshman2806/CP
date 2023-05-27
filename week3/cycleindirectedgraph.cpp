bool DFS(vector<vector<int>>& adj, vector<int>& visited, int x) {
    visited[x] = 1;

    for (auto& i : adj[x]) {
        if (visited[i]) {
            return true; // Cycle found
        } else {
            if (DFS(adj, visited, i)) {
                return true; // Propagate the cycle detection
            }
        }
    }

    visited[x] = 0; // Reset visited status after the DFS of the node
    return false;
}

int Solution::solve(int A, vector<vector<int>>& B) {
    vector<vector<int>> adj(A + 1);

    for (int i = 0; i < B.size(); i++) {
        adj[B[i][0]].push_back(B[i][1]);
    }

    vector<int> visited(A + 1, 0);

    for (int i = 1; i <= A; i++) {
        if (!visited[i]) {
            if (DFS(adj, visited, i)) {
                return 1; // Cycle found
            }
        }
    }

    return 0; // No cycle found
}