int find(vector<int>&parent, int u)
{
    if(parent[u]==u)
        return u;
    return find(parent,parent[u]);
}

void unionl(vector<int>&parent, int u, int v)
{
    parent[find(parent,u)] = find(parent,v);
}


class Solution
{
    
    public:
    //Function to detect cycle using DSU in an undirected graph.
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>parent(V);
	    for(int i =0;i<V;i++)
	    {
	        parent[i]=i;
	    }
	    for(int i =0;i<V;i++)
	    {
	        for(auto &j: adj[i])
	        {
	            if(i < j && find(parent,i) == find(parent,j))
	           {
	               //cout << i << " " << j << endl;
	               return 1;
	           }
	            unionl(parent,i,j);
	        }
	    }
	    return 0;
	}
};
