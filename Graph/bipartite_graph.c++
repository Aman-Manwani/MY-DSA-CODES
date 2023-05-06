// graph whose nodes we can colour with only 2 colours
// a linear graph with no cycle is always a bipartite graph
// any graph with even cycle length is also bipartite
// let's deep dive into the code by both bfs and dfs 

BY BFS 

    bool check(int start,vector<vector<int>>& graph,vector<int>&color)
    {
        color[start] = 0;
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(color[it]==-1)
                {
                    color[it] = !color[node];
                    q.push(it);
                }else
                if(color[it] == color[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==-1)
            {
                if(check(i,graph,color) == false)
                {
                    return false;
                }
            }
        }
        return true;
    }

    BY DFS 

    bool check(int start,int colored,vector<vector<int>>& graph,vector<int>color)
    {
        color[start] = colored;
        for(auto it:graph[start])
        {
            if(color[it] == -1)
            {
                if(check(it,!colored,graph,color)==false)
                {
                    return false;
                }
            }
            if(color[it]==colored)
            {
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==-1)
            {
                if(check(i,0,graph,color) == false)
                {
                    return false;
                }
            }
        }
        return true;
    }