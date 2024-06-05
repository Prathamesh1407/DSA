// if 0 indexing n/2-1 => >=0 L 2i+1 R 2i+2
// if 1 indexing n/2 => >0 L 2i R 2i+1
/*
    void heapify(vector<int>&ans,int n,int i)
    {
        int largest=i;
        int leftInd=2*i+1;
        int rightInd=2*i+2;
        if(leftInd<n && ans[leftInd]>ans[largest]) largest=leftInd;
        if(rightInd<n && ans[rightInd]>ans[largest]) largest=rightInd;

        if(largest!=i)
        {
            swap(ans[i],ans[largest]);
            heapify(ans,n,largest);
        }
    }
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int k, int m) {
        // your code here
        vector<int>ans;
        for(auto val:a)
        {
            ans.push_back(val);
        }
        for(auto val:b)
        {
            ans.push_back(val);
        }
        int n=ans.size();
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(ans,n,i);
        }
        return ans;
    }
*/