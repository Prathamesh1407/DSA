#include<bits/stdc++.h>
using namespace std;
#include "Graph.cpp"
typedef long long int ll;
bool isCycleDFS(unordered_map<int, bool> &visited,unordered_map<int, list<int>> adjList,int node,unordered_map<int, bool>& dfsVisited)
{
    visited[node]=1;
    dfsVisited[node]=1;
    for(auto val:adjList[node])
    {
        if(visited[val]==false)
        {
            bool ans=isCycleDFS(visited,adjList,val,dfsVisited);
            if(ans==true) return true;
        }
        else if(dfsVisited[val]==true)
        {
            return true;
        }
    }
    dfsVisited[node]=0;
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
    unordered_map<int, list<int>> adjList = g.adjList;
    g.printNodes();

    unordered_map<int, bool> dfsVisited;
    unordered_map<int, bool> visited;
    bool ans;
    int i;
    for (i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans = isCycleDFS(visited,adjList,i,dfsVisited);
            if (ans == true)
            {
                i = -1;
                break;
            }
        }
    }
    if (i == -1)
    {
        cout << "Cycle is present";
    }
    else
        cout << "Cycle is not Present";
    return 0;
}