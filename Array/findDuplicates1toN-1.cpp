#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
   int ans=0;
   //XOR of whole array
	for(int i=0;i<arr.size();i++){
		ans=ans^arr[i];
	}
    //XOR of remaining elements with indexes
	for(int i=1;i<arr.size();i++){
		ans=ans^i;
	}
	return ans;
	
}

int main(){
    vector<int>arr={2,3,4,1,2};
    cout<<findDuplicate(arr);
    return 0;
}