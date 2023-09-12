bool helper(bool graph[101][101], int m, int n, int node, vector<int>&colour)
{
    if(node==n)
        return true;
    
    for(int i = 0; i < m; i++)
    {
        bool flag = true;
        for(int j = 0; j < n; j++)
        {
            if(graph[node][j])
            {
                if(colour[j]==i)
                {
                    flag = false;
                    break;
                }
            }
            
        }
        if(!flag)    
            continue;
        colour[node] = i;
        if(helper(graph, m, n, node+1, colour))
            return true;
        colour[node] = -1;
    }
    return false;
}


class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int>colour(n, -1);
        return helper(graph, m, n, 0, colour);
    }
};