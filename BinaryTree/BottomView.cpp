/*
    class Solution {
  public:
    vector <int> topView(Node *root) {
        // Your Code Here
        if(root==NULL) return {};
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        vector<int>v;
        while(!q.empty())
        {
            pair<Node*,int>temp=q.front();
            q.pop();
            Node* frontNode=temp.first;
            int hd=temp.second;
            
            m[hd]=frontNode->data;
            
            if(frontNode->left) q.push(make_pair(frontNode->left,hd-1));
            if(frontNode->right) q.push(make_pair(frontNode->right,hd+1));
        }
        
        for(auto val:m) 
        {
            v.push_back(val.second);
        }
        return v;
    }
};
*/