    // code for bfs of graph practice ques of bfs on gfg bfs traversal of graph
    
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>visited(V,0);
        visited[0] = 1;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node])
            {
                if(!visited[it])
                {
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }