// Kosaraju's Algo

/*
    1. Find the topological sort to get the sequence of components in the SCC
    2. Reverse the every edge of graph i.e Transpose of Graph
    3. Apply the DFS and increment counter to get SCC
*/

/*

    void dfs(int node,vector<vector<int>>&adj,vector<int>&visited,stack<int>&st)
    {
        visited[node]=1;

        for(auto val:adj[node])
        {
            if(visited[val]==false)
            {
                dfs(val,adj,visited,st);
            }
        }
        st.push(node);
    }
    void dfs2(int node,vector<int>adjT[],vector<int>&visited)
    {
        visited[node]=1;

        for(auto val:adjT[node])
        {
            if(visited[val]==false)
            {
                dfs2(val,adjT,visited);
            }
        }
    }
    public:
    //Function to find number of strongly connected components in the graph.
    int kosaraju(int v, vector<vector<int>>& adj)
    {
        //code here
        stack<int>st;
        vector<int>visited(v,0);
        //Find Topological Sort
        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
            {
                dfs(i,adj,visited,st);
            }
        }
        vector<int>adjT[v];
        //Transpose the Graph Reverse the direction of edges
        for(int i=0;i<v;i++)
        {
            visited[i]=0;
            for(auto val:adj[i])
            {
                adjT[val].push_back(i);
            }
        }
        int scc=0;
        while(!st.empty())
        {
            int frontNode=st.top();
            st.pop();

            if(visited[frontNode]==false)
            {
                scc++;
                dfs2(frontNode,adjT,visited);
            }

        }
        return scc;
    }

*/