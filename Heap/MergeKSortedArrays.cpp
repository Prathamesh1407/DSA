// T.C : O(n*k log k)
// T.C : O(n*k)

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Node
{
public:
    int data;
    int i, j;
    Node(int data, int i, int j)
    {
        this->data = data;
        this->i = i;
        this->j = j;
    }
};
class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
int main()
{
    vector<vector<int>> v = {{2, 6, 12, 34},
                             {1, 9, 20, 1000},
                             {23, 34, 90, 2000}};
    vector<int> ans;
    int k = 3;
    priority_queue<Node *, vector<Node *>, compare> pq;
    for (int i = 0; i < k; i++)
    {
        Node *temp = new Node(v[i][0], i, 0);
        pq.push(temp);
    }
    while (!pq.empty())
    {
        Node *temp = pq.top();
        pq.pop();
        int i = temp->i;
        int j = temp->j;
        ans.push_back(temp->data);
        if (j + 1 < v[i].size())
        {
            Node *next = new Node(v[i][j + 1], i, j + 1);
            pq.push(next);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}