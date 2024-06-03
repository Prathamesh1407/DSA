/*
    pair<int, int> predecessorSuccessor(TreeNode *root, int key)
    {
        // Write your code here.
        int pred=-1,succ=-1;
        TreeNode* node1=NULL;
        while(root!=NULL)
        {
            if(root->data==key) 
            {
                node1=root;
                break;
            } 
            if(root->data>key)
            {
                succ=root->data;
                root=root->left;
            } else {
                pred=root->data;
                root = root->right;
            }
        }
        if(node1==NULL) return {pred,succ};
        TreeNode* temp=node1->left;
        while(temp)
        {
            pred=temp->data;
            temp=temp->left;
        }
        temp=node1->right;
        while(temp)
        {
            succ=temp->data;
            temp=temp->right;
        }
        //cout<<pred<<" "<<succ;
        return {pred,succ};
    }
*/