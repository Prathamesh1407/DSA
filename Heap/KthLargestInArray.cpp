//Here for finding K th Largest number => Use Min Heap we want k numbers larger in below nodes 
//Here for finding K th Smallest number => Use Max Heap we want k numbers Smaller in below nodes 
//Use Priority Queue for implementing Min or Max Heap
/*
//T.C : n(log k)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++)
        {
            if(nums[i]>pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};

*/