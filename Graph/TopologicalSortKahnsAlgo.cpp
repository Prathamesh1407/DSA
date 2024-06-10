// Algorithm

/*

    1.find indegree of all nodes
    2.push the nodes in the queue those have indegree as 0
    3.Apply the BFS
    5.print the frontNode
    4.visit the neighbouring nodes and while visiting do -- i.e removal of parent


*/

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
        g.addNodes(u, v, 1);
    }
    unordered_map<int, list<int>> adjList = g.adjList;
    g.printNodes();

    vector<int> indegree(n + 1);
    indegree[0] = -1;
    for (auto i : adjList)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
        cout << indegree[i] << " ";
    }
    cout << endl;
    vector<int> ans;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        cout << frontNode << " ";
        ans.push_back(frontNode);
        for (auto val : adjList[frontNode])
        {
            indegree[val]--;
            if (indegree[val] == 0)
                q.push(val);
        }
    }
    cout << endl;
    for (auto val : ans)
    {
        cout << val << " ";
    }
}