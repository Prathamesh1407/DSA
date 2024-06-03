//T.C : O(n)
//S.C : O(1)
/*
    void flatten(TreeNode* root) {
        TreeNode* curr=root;
        
        while(curr!=NULL)
        {
            if(curr->left)
            {
                TreeNode* pred=curr->left;
                while(pred->right) pred=pred->right;
                pred->right=curr->right;
                
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }
*/