#include <bits/stdc++.h>
using namespace std;
#include "DirectedGraph.cpp"
typedef long long int ll;
int main()
{
    Graph<int> g;
    int n, m, u, v, w; // n => No. of Nodes m => No. of edges
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
    vector<int> dist(n, INT_MAX);
    set<pair<int, int>> s;
    // first => Node Distance   Second => Node
    s.insert({0, src});
    dist[src] = 0;
    while (!s.empty())
    {
        pair<int, int> top = *(s.begin());
        int frontNodeDistance = top.first;
        int frontNode = top.second;

        s.erase(s.begin());

        for (auto val : adjList[frontNode])
        {
            int wt = val.second;
            int node = val.first;
            if (frontNodeDistance + wt < dist[node])
            {
                auto recordInSet = s.find({dist[node], node});
                if (recordInSet != s.end())
                {
                    s.erase(recordInSet);
                }

                dist[node] = frontNodeDistance + wt;
                s.insert({dist[node], node});
            }
        }
    }
    for (auto val : dist)
        cout << val << " ";
    return 0;
}