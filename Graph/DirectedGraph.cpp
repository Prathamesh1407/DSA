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
                if (!visited[i.first])
                {
                    q.push(i.first);
                    visited[i.first] = 1;
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
            if (!visited[val.first])
            {
                dfsUtil(visited, ans, val.first);
            }
        }
    }

public:
    unordered_map<T, list<pair<T,T>>> adjList;
    void addNodes(T u, T v, T w)
    {
        adjList[u].push_back({v,w});
    }
    void printNodes()
    {
        for (auto i : adjList)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "[ "<<j.first<<" , " <<j.second<<" ], ";
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
//     Graph<int>g;
//     g.addNodes(0,1,3,0);
//     g.addNodes(0,2,5,0);
//     vector<int>ans=g.dfs(3);
//     for(auto val:ans) cout<<val<<" ";
//     g.printNodes();
// }