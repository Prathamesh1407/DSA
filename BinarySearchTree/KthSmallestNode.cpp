/*
    int solve(TreeNode* root, int & k)
    {
        if(root==NULL) return -1;
        int left=solve(root->left,k);
        cout<<left<<endl;
        if(left!=-1) return left;
        k--;
        //cout<<root->val<<" "<<k<<endl;
        if(k==0) return root->val;
        int right=solve(root->right,k);
        return right;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        return solve(root,k);
    }
*/