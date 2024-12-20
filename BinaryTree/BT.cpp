#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *createBT(Node *root)
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new Node(data);
    root->left = createBT(root->left);
    root->right = createBT(root->right);
    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
bool solve(Node* root)
{
    Node *curr = root;
    int prev = INT_MIN, flag = 1;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            cout << "1 " << curr->data << " " << prev << endl;
            if (curr->data < prev)
            {
                cout<<1<<endl;
                return 0;
            }
            prev = curr->data;
            curr = curr->right;
        }
        else
        {
            Node *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }
            if (pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                cout << "2 " << curr->data << " " << prev << endl;
                if (curr->data < prev)
                {
                    cout<<2<<endl;
                    return false;
                }
                pred->right = NULL;
                prev = curr->data;
                curr = curr->right;
            }
        }
    }
    return true;
}
int main()
{
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    Node *root = NULL;
    root = createBT(root);
    cout << "Level Order Traversal" << endl;
    levelOrderTraversal(root);
    cout << "Inorder Traversal" << endl;
    inorder(root);
    cout << endl
         << "Preorder Traversal" << endl;
    preorder(root);
    cout << endl
         << "Postorder Traversal" << endl;
    postorder(root);
    cout<<endl;
    cout<<solve(root);
    return 0;
}