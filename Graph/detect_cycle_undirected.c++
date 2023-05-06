// make a visted array for checking is there any components cycle present 
// apply bfs algo and push node number and the parent(the node it came from )

bool detectCycle(int src,vector<int>adj[],int vis[])
    {
        vis[src] = 1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(!vis[it] && it!=parent)
                {
                    vis[it]=1;
                    q.push({it,parent});
                }else
                if(vis[it] && it!=parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        int vis[V] = {0};
        for(int i=0;i<V;i++)
        {
            if(detectCycle(i,adj,vis))
            {
                return true;
            }
        }
        return false;
    }



    BY TOPOLOGICAL SORTING (Kahns algo) 
    // topological sorting applies only on DAG(directed acyclic graph)
    // if cycle is present then cnt(stores the node count) value is definitely less than V(vertices)

    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
        if(cnt == V)    return false;
        return true;
    }