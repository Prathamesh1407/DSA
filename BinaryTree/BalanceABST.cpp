/*
    class Solution {
    void inorder(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* makeTree(vector<int>&ans,int s,int e)
    {
        if(s>e) return NULL;
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        root->left=makeTree(ans,s,mid-1);
        root->right=makeTree(ans,mid+1,e);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return makeTree(ans,0,ans.size()-1);
    }
};
*/