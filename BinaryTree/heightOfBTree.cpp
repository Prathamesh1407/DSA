// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

/*
    int height(struct Node* node){
        // code here
        if(node==NULL) return 0;
        int left=height(node->left);
        int right=height(node->right);
        return 1+max(left,right);
    }
*/