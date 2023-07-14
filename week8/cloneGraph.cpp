/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    if (!node)
        return NULL;
    unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> mp;
    queue<UndirectedGraphNode *> q;
    q.push(node);
    UndirectedGraphNode *nodeCopy = new UndirectedGraphNode(node->label);
    mp[node] = nodeCopy;
    while (!q.empty())
    {
        UndirectedGraphNode *cur = q.front();
        q.pop();
        int n = cur->neighbors.size();
        for (int i = 0; i < n; ++i)
        {
            UndirectedGraphNode *neighbor = cur->neighbors[i];
            // no copy exists
            if (mp.find(neighbor) == mp.end())
            {
                UndirectedGraphNode *p = new UndirectedGraphNode(neighbor->label);
                mp[cur]->neighbors.push_back(p);
                mp[neighbor] = p;
                q.push(neighbor);
            }
            else
            { // a copy already exists
                mp[cur]->neighbors.push_back(mp[neighbor]);
            }
        }
    }
    return nodeCopy;
}
