/*

    This Algo is used for finding minimum cost spanning tree

    Algo :
    Sort the adjList acc to weight
    check the parent if same continue the iteration and if diffrent call the unionset func and union the components

*/

#include <bits/stdc++.h>
using namespace std;
#include "DirectedGraph.cpp"
typedef long long int ll;
void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node)
{
    if (parent[node] == node)
        return node;
    //parent[node]= is for the path compression
    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        // can make any node parent of other node and upgrade the rank of the parent node
        parent[v] = u;
        rank[u]++;
    }
}

int main()
{
    Graph<int> g;
    int n, m, u, v, w; // n => No. of Nodes m => No. of adjList
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        g.addNodes(u, v, w, 0);
    }
    unordered_map<int, list<pair<int, int>>> adjList = g.adjList;
    g.printNodes();
    int src;
    cout << "Enter Source Node" << endl;
    cin >> src;

    vector<pair<int, pair<int, int>>> edges;

    for (int i = 0; i < n; i++)
    {
        for (auto val : adjList[i])
        {
            edges.push_back({val.second, {i, val.first}});
        }
    }
    //if edges in vector of vector sort it by the compare func vector<int> as a parameter 
    sort(edges.begin(), edges.end());
    
    
    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent, rank, n);
    int minCost = 0;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].second.first;
        int v = edges[i].second.second;

        int wt = edges[i].first;

        if (findParent(parent, u) != findParent(parent, v))
        {
            minCost += wt;
            unionSet(u, v, parent, rank);
        }
    }
    cout << minCost;
    return 0;
}