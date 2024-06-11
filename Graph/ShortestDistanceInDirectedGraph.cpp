// T.C : O(N+E)
// S.C : O(N+E)

#include <bits/stdc++.h>
using namespace std;
#include "DirectedGraph.cpp"
typedef long long int ll;
void topologicalSort(unordered_map<int, list<pair<int, int>>> adjList, unordered_map<int, bool> &visited, int node, stack<int> &st)
{
    visited[node] = 1;

    for (auto val : adjList[node])
    {
        if (!visited[val.first])
        {
            topologicalSort(adjList, visited, val.first, st);
        }
    }
    st.push(node);
}
int main()
{
    Graph<int> g;
    int n, m, u, v, w;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        g.addNodes(u, v, w);
    }
    int src;
    cout << "Enter Source Node " << endl;
    cin >> src;
    g.printNodes();
    unordered_map<int, list<pair<int, int>>> adjList = g.adjList;

    // Topological Sort
    unordered_map<int, bool> visited;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            topologicalSort(adjList, visited, i, st);
        }
    }
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    while (!st.empty())
    {
        int frontNode = st.top();
        st.pop();
        if (dist[frontNode] != INT_MAX)
        {
            for (auto val : adjList[frontNode])
            {
                int vertex = val.first;
                int wt = val.second;

                if (dist[frontNode] + wt < dist[vertex])
                {
                    dist[vertex] = dist[frontNode] + wt;
                }
            }
        }
    }
    for (auto val : dist)
        cout << val << " ";
    return 0;
}

/*

    5 6
    1 2 2
    2 5 5
    2 3 4
    1 4 1
    4 3 3
    3 5 1


    6
    9
    0 1 5
    0 2 3
    1 2 2
    1 3 6
    2 5 2
    2 3 7
    2 4 4
    4 5 -2
*/