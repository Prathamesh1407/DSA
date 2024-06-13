/*

    Tarjan's Algo

Any adjacent node (except parent)  has low time greater than curr node means node and adj node share an edge
and the adj node is only reachable  via this edge , so if we remove this edge we never gonna reach this adjNode , means this edge is a bridge

otherwise if low time is equal or lesser than curr node time , means that adjnode has other path which takes lesser or equal time than curr node , so if we try to remove this edge we still can reach the adjNode from other path , means they are still  connected to each other , the edge is not a bridge
*/
/*
    int timer =1;

    void dfs(int node,int parent,vector<int>&tin,vector<int>&low,vector<int>&visited,unordered_map<int,list<int>>&adjList,vector<vector<int>>&bridges)
    {
        visited[node]=1;
        low[node]=tin[node]=timer++;

        for(auto val:adjList[node])
        {
            if(val==parent) continue;

            if(visited[val]==0)
            {
                //Not Visited

                dfs(val,node,tin,low,visited,adjList,bridges);
                low[node]=min(low[node],low[val]);

                //Check the bridge
                if(low[val]>tin[node])
                {
                    bridges.push_back({val,node});
                }
            }
            else
            {
                low[node]=min(low[node],low[val]);
            }
        }
    }
    public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,list<int>>adjList;

        for(auto val:connections)
        {
            adjList[val[0]].push_back(val[1]);
            adjList[val[1]].push_back(val[0]);
        }

        vector<int>tin(n);
        vector<int>visited(n,false);
        vector<int>low(n);
        vector<vector<int>>bridges;
        dfs(0,-1,tin,low,visited,adjList,bridges);
        return bridges;
    }

*/