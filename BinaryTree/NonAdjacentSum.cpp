//pair.first including pair.second Excluding
/*
    class Solution{
    pair<int,int> solve(Node* root)
    {
        if(root==NULL) return {0,0};
        
        pair<int,int>leftAns=solve(root->left);
        pair<int,int>rightAns=solve(root->right);
        
        pair<int,int>res;
        
        res.first=root->data+leftAns.second+rightAns.second;
        res.second=max(leftAns.first,leftAns.second)+max(rightAns.first,rightAns.second);
        
        return res;
    }
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int>ans=solve(root);
        return max(ans.first,ans.second);
    }
};
*/