// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055

/*
    int postorder(BinaryTreeNode<int> *root,int &c)
    {
        if(root==NULL) return 0;
        postorder(root->left,c);
        postorder(root->right,c);
        if(root->left==NULL && root->right==NULL) c++;
    }
    int noOfLeafNodes(BinaryTreeNode<int> *root){
        // Write your code here.
        int c=0;
        postorder(root,c);
        return c;
    }
*/