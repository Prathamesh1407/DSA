/*
    We use this Algo to find Minimum Spanning Tree

    Spanning tree : from the graph make a tree which has n Nodes and n-1 Edges

    Minimum Spanning Tree : Minimum Cost to make that spanning tree

    Steps
    1. Mark the visited array as 0 for all the nodes

    2. Start with 0th node and push
    (0,0,-1)
    explanation:  -1 means 0 is the genesis node
    Mark 0 as visited

    3. Push all the neighbours of 0 in pq Do not mark them visited  (footnote 1)
    Since its a min heap the edge with minimum weight will be at the top

    4. Pick up the top edge , insert it in the mst , mark the picked node as visited , insert all neighbours of picked node into pq

    5. keep repeating steps 3 and 4 untill all the nodes have been picked up and thats when the algorithm ends


    footnote:
    1. why to not mark it visited?
    in bfs , when we push the element inside a queue we mark it as visited cause that element will be picked up later for sure (algorithm ends only when the queue is empty )
    but in msts case even if we push the edge into pq , theres no surety that the edge will be picked up . when prims algo ends there are still a few non accepted edges present in the pq hence we only mark it visited once its picked up from pq
*/

// T.C : O(E log E)
// S.C : O(E)
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
    vector<pair<int, int>> mst;
    vector<int> visited(n, false);

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    // {weight,{node,parent}}
    pq.push({0, {src, -1}});

    int sum = 0;

    while (!pq.empty())
    {
        // log E
        int nodeDistance = pq.top().first;
        int node = pq.top().second.first;
        int parent = pq.top().second.second;
        pq.pop();
        if (visited[node] == true)
            continue;

        visited[node] = 1;
        if (parent != -1)
            mst.push_back({node, parent});

        sum += nodeDistance;
        // E log E
        for (auto val : adjList[node])
        {
            int adjNode = val.first;
            int adjWeight = val.second;

            if (visited[adjNode] == false)
            {
                pq.push({adjWeight, {adjNode, node}});
            }
        }
    }

    for (auto val : mst)
        cout << val.first << " " << val.second << endl;
    cout << sum;
    return 0;
}