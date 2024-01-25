#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int getPivot(int a[],int n)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]>=a[0]) s=mid+1;
        else e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int a[],int s,int e,int n,int key)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==key) return mid;
        else if(a[mid]>key) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return 0;
}
int main(){
    int a[]={7,9,1,2,4,5,6};
    int n=sizeof(a)/sizeof(int);
    int pivot=getPivot(a,n);
    int key=8;
    if(a[pivot]<=key && key<=a[n-1])
    {
        if(binarySearch(a,pivot,n-1,n,key)) cout<<"Found";
        else cout<<"Not found";
    }
    else if(binarySearch(a,0,pivot-1,n,key)) cout<<"Found";
    else cout<<"Not found";
    return 0;
}