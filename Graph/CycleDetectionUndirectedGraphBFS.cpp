#include <bits/stdc++.h>
#include "Graph.cpp"
using namespace std;
typedef long long int ll;
bool isCycleBFS(int n,unordered_map<int,bool>&visited,unordered_map<int, list<int>> adjList,int node)
{
    unordered_map<int,int>parent;
    queue<int>q;
    q.push(node);
    visited[node]=1;
    parent[node]=-1; //1 st node won't be having parent node

    while(!q.empty())
    {
        int frontNode=q.front();
        q.pop();

        for(auto val:adjList[frontNode])
        {
            if(visited[val]==true && parent[frontNode]!=val)
            {
                cout<<val;
                return true;
            }
            else if(visited[val]==false) 
            {
                q.push(val);
                visited[val]=1;
                parent[val]=frontNode;
            }
        }
    }

    return false;

}
int main()
{
    Graph<int> g;
    int n, m, u, v; // n => No. of Nodes m => No. of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.addNodes(u, v, 0);
    }
    unordered_map<int, list<int>> adjList=g.adjList;
    g.printNodes();

    // g.printNodes();
    // vector<int> ans = g.bfs(n);
    // cout << "BFS : ";
    // for (auto val : ans)
    //     cout << val << " ";
    unordered_map<int,bool>visited;
    bool ans; 
    int i;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans=isCycleBFS(n,visited,adjList,i);
            if(ans==true)
            {
                i=-1;
                break;
            }
        }
    }
    if(i==-1)
    {
        cout<<"Cycle is present";
    }
    else cout<<"Cycle is not Present";
    return 0;
}