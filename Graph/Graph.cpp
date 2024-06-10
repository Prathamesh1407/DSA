#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
template <typename T>
class Graph
{

    // T.C : O(V+E)
    // T.C : O(V)
    void bfsUtil(unordered_map<int, bool> &visited, vector<int> &ans, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);

            for (auto i : adjList[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
    // T.C : O(V+E)
    // T.C : O(V)
    void dfsUtil(unordered_map<int, bool> &visited, vector<int> &ans, int node)
    {
        visited[node] = 1;
        ans.push_back(node);

        for (auto val : adjList[node])
        {
            if (!visited[val])
            {
                dfsUtil(visited, ans, val);
            }
        }
    }

public:
    unordered_map<T, list<T>> adjList;
    void addNodes(T u, T v, bool isDirected)
    {
        adjList[u].push_back(v);
        if (isDirected == false)
            adjList[v].push_back(u);
    }
    void printNodes()
    {
        for (auto i : adjList)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
    vector<T> dfs(int n)
    {
        unordered_map<int, bool> visited;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfsUtil(visited, ans, i);
            }
        }
        return ans;
    }
    vector<T> bfs(int n)
    {
        unordered_map<int, bool> visited;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                bfsUtil(visited, ans, i);
            }
        }
        return ans;
    }
};
// int main()
// {
// Graph<int> g;
// int n, m, u, v; // n => No. of Nodes m => No. of edges
// cin >> n >> m;
// for (int i = 0; i < m; i++)
// {
//     cin >> u >> v;
//     g.addNodes(u, v, 0);
// }
// g.printNodes();
// vector<int> ans = g.bfs(n);
// cout << "BFS : ";
// for (auto val : ans)
//     cout << val << " ";
//     ans = g.dfs(n);
//     cout << endl;
//     cout << "DFS : ";
//     for (auto val : ans)
//         cout << val << " ";
//     return 0;
// }