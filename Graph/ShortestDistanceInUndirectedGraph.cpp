// T.C : O(N+E)
// S.C : O(N+E)
#include <bits/stdc++.h>
using namespace std;
#include "Graph.cpp"
typedef long long int ll;
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
    int src, dest;
    cout << "Enter Source and Destination" << endl;
    cin >> src >> dest;
    queue<int> q;
    vector<int> parent(n);
    unordered_map<int, bool> visited;
    q.push(src);
    parent[src] = -1;
    visited[src] = 1;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        for (auto val : adjList[frontNode])
        {
            if (visited[val] == false)
            {
                visited[val] = 1;
                parent[val] = frontNode;
                q.push(val);
                // if(val==dest) break;
            }
        }
    }
    vector<int> ans;
    int currentNode = dest;
    ans.push_back(currentNode);
    while (currentNode != src)
    {
        currentNode = parent[currentNode];
        ans.push_back(currentNode);
    }
    reverse(ans.begin(), ans.end());
    for (auto val : ans)
    {
        cout << val << " ";
    }
}