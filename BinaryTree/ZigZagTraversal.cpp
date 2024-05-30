//T.C : O(N)
//S.C : O(N)
/*
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>result;
    	if(root==NULL) return result;
    	
    	queue<Node*>q;
    	q.push(root);
    	bool ltr=true;
    	while(!q.empty())
    	{
    	    int size=q.size();
    	    vector<int>ans(size);
    	    for(int i=0;i<size;i++)
    	    {
        	    Node* frontNode=q.front();
        	    q.pop();
        	    int index=ltr?i:size-i-1;
        	    ans[index]=frontNode->data;
        	    
        	    if(frontNode->left) q.push(frontNode->left);
        	    if(frontNode->right) q.push(frontNode->right);
    	    }
    	    ltr=!ltr;
    	    for(auto val:ans)
    	    {
    	        //cout<<val<<" ";
    	        result.push_back(val);
    	    }
    	    //cout<<endl;
    	}
    	return result;
    }
*/