#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isSorted(int arr[],int n)
{
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,n-1);
}
int main(){
    int arr[]={1,3,5,7,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<(isSorted(arr,n)?"Sorted":"UnSorted");
    return 0;
}