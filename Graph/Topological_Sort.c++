// topological sort means that if u and v is connected like u->v then in the order u also come first than v;
// topological sorting is only applicable on DAG (directed acyclic graph)
// because the condition for topological sort is not possible and can not be applicable on undirected and cyclic graphs
// topological sort algorithm uses dfs to find the order while to do this with bfs, we kahn's algorithm
// idea behind this algo is to make a dfs call and the last node(which is not connected to any other node)
// push this node on the stack and doing this we get the required order of topological sort 

class Solution
{
	public:
	void dfs (int node,vector<int>&vis,vector<int>adj[],stack<int>&st)
	{
	    vis[node] = 1;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	            dfs(it,vis,adj,st);
	        }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V,0);
	    stack<int>st;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,vis,adj,st);
	        }
	    }
	    vector<int>ans;
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};