#include <bits/stdc++.h>
using namespace std;
#include "Graph.cpp"
typedef long long int ll;

// Can only be applied on Directed Acyclic Graph. if cyclic graph 1->2->3->1 Adj List will be 1->2  2->3  3->1 so topological sort 1,2,3 but for 3 to be come before 1 not possible invalid topological sort
void TopologicalSort(unordered_map<int, bool> &visited, unordered_map<int, list<int>> adjList, int node, stack<int> &st)
{
    visited[node] = 1;

    for (auto val : adjList[node])
    {
        if (!visited[val])
        {
            TopologicalSort(visited, adjList, val, st);
        }
    }
    st.push(node);
}
int main()
{
    Graph<int> g;
    int n, m, u, v; // n => No. of Nodes m => No. of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.addNodes(u, v, 1);
    }
    unordered_map<int, list<int>> adjList = g.adjList;
    g.printNodes();

    unordered_map<int, bool> visited;
    stack<int> st;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            TopologicalSort(visited, adjList, i, st);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    for (auto val : ans)
        cout << val << " ";
    return 0;
}