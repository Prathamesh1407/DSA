//T.C : O(V*E)
//T.C : O(V)

/*
    Used for finding shortest path 
    Can only be applied on Directed Graph , if Undirected Graph just convert it into Directed by adding 2 edges forward and backward in between nodes i.e 2 => 3 ===>  2<==>3
    We have Dijkstra for that then Why Bellman Ford?

    Djikstra will also work for -ve weights but if negative cycle found in graph i.e A cycle with negative sum 
    the Dijkstra will continue finding lesser and lesser value that will lead to TLE 
*/
/*

    vector<int> bellman_ford(int v, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(v,1e8);
        dist[S]=0;
        for(int i=0;i<v-1;i++)
        {
            for(auto val:edges)
            {
                int u=val[0];
                int v=val[1];
                int wt=val[2];
                
                if(dist[u]!=1e8 && dist[u]+wt<dist[v])
                {
                    dist[v]=dist[u]+wt;
                }
            }
        }
        
        for(auto val:edges)
        {
            int u=val[0];
                int v=val[1];
                int wt=val[2];
                
                if(dist[u]!=1e8 && dist[u]+wt<dist[v])
                {
                    //-ve cycle present
                    return {-1};
                }
        }
        return dist;
    }


*/