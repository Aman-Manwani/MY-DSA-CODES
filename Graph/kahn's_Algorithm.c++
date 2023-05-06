// this is the code to find topological sort order but by bfs method 
// so first we find the indegree so that we get to know which node is not connected to any other node and push it on queue 
// then apple the bfs to all the adj node of queue values and decrease the value of indegree to keep track of next element of the order 

class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V,0);
	    vector<int>indegree(V,0);
	    vector<int>ans;
        //step 2 
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
	    while(!q.empty())
	    {
	        int node  = q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto it:adj[node])
	        {
	            indegree[it]--;
	            if(!indegree[it])
	            {
	                q.push(it);
	            }
	        }
	    }
	    return ans;
	}
};