/*
    class Solution
{
    void solve(Node* root,vector<int>&ans,int lvl)
    {
        if(root==NULL) return;
        
        if(ans.size()==lvl) ans.push_back(root->data);
        
        solve(root->left,ans,lvl+1);
        solve(root->right,ans,lvl+1);
    }
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> leftView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       solve(root,ans,0);
       return ans;
    }
};


*/