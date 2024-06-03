/*
    Node* createMapping(Node* root,int target,map<Node*,Node*>&nodeToParent)
    {
        Node* res=NULL;
        
        queue<Node*>q;
        nodeToParent[root]=NULL;
        q.push(root);
        while(!q.empty())
        {
            Node* frontNode=q.front();
            q.pop();
            
            if(frontNode->data==target) res=frontNode;
            if(frontNode->left) 
            {
                q.push(frontNode->left);
                nodeToParent[frontNode->left]=frontNode; 
            }
            if(frontNode->right) 
            {
                q.push(frontNode->right);
                nodeToParent[frontNode->right]=frontNode; 
            }
        }
        return res;
    }
    int solve(Node* root,map<Node*,Node*>nodeToParent)
    {
        queue<Node*>q;
        map<Node*,bool>visited;
        int ans=0;
        q.push(root);
        visited[root]=1;
        while(!q.empty())
        {
            int size=q.size();
            bool flag=0;
            for(int i=0;i<size;i++)
            {
                Node* frontNode=q.front();
                q.pop();
                
                if(frontNode->left && !visited[frontNode->left])
                {
                    flag=1;
                    q.push(frontNode->left);
                    visited[frontNode->left]=true;
                }
                if(frontNode->right && !visited[frontNode->right])
                {
                    flag=1;
                    q.push(frontNode->right);
                    visited[frontNode->right]=true;
                }
                if( nodeToParent[frontNode] && !visited[nodeToParent[frontNode]])
                {
                    flag=1;
                    q.push(nodeToParent[frontNode]);
                    visited[nodeToParent[frontNode]]=true;
                }
                
            }
            if(flag==1) ans++;
        }
        return ans;
    }
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*>nodeToParent;
        Node* tNode=createMapping(root,target,nodeToParent);
        return solve(tNode,nodeToParent);
    }
*/