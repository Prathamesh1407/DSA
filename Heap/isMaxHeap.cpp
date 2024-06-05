//T.C : O(n)
//S.C : O(n)

/*
    class Solution {
    int countNode(struct Node* root)
    {
        if(root==NULL) return 0;
        return 1+countNode(root->left)+countNode(root->right);
    }
    bool isCBT(struct Node* root,int ind,int nodeCount)
    {
        if(root==NULL) return true;
        if(ind>=nodeCount) return false;
        return isCBT(root->left,2*ind+1,nodeCount) && isCBT(root->right,2*ind+2,nodeCount);
    }
    bool MaxHeapOrder(struct Node* root)
    {
        if(root->left==NULL && root->right==NULL) return true;
        
        if(root->right==NULL) return root->data>root->left->data;
        
        return root->left->data<root->data && root->right->data<root->data && MaxHeapOrder(root->left) && MaxHeapOrder(root->right);
    }
    public:
    bool isHeap(struct Node* tree) {
        // code here
        int nodeCount=countNode(tree);
        return isCBT(tree,0,nodeCount) && MaxHeapOrder(tree);
    }
};
*/