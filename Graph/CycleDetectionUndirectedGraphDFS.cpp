#include <bits/stdc++.h>
#include "Graph.cpp"
using namespace std;
typedef long long int ll;
bool isCycleDFS(unordered_map<int, bool> &visited, int parent, unordered_map<int, list<int>> adjList, int node)
{
    visited[node] = 1;
    for (auto val : adjList[node])
    {
        if (visited[val] == false)
        {
            bool ans = isCycleDFS(visited, node, adjList, val);
            if (ans == true)
                return true;
        }
        else if (parent != val)
        {
            // present
            return true;
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
    unordered_map<int, list<int>> adjList = g.adjList;
    g.printNodes();

    unordered_map<int, bool> visited;
    bool ans;
    int i;
    for (i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans = isCycleDFS(visited, -1, adjList, i);
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