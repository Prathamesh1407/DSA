#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool binarySearch(int arr[],int s,int e,int key)
{
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return true;
    if(key>arr[mid]) return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key);
}
int main(){
    int arr[]={1,3,5,7,6};
    int n=sizeof(arr)/sizeof(int);
    int key=0;
    cout<<(binarySearch(arr,0,n-1,key)?"Found":"Not Found");
    return 0;
}