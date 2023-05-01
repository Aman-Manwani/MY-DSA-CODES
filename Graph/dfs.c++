// dfs traversal of graphs practice on gfg

void dfs (int node, vector<int> adj[],vector<int>&visited,vector<int>&ans)
    {
        visited[node] = 1;
        ans.push_back(node);
        for(auto it:adj[node])
        {
            if(!visited[it])
                dfs(it,adj,visited,ans);    
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>visited(V,0);
        dfs(0,adj,visited,ans);
        return ans;
    }