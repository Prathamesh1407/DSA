#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int firstOccurence(int a[],int n,int key)
{
    int s=0,e=n-1,mid=s+(e-s)/2,ans;

    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]<key)
        {
            s=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(int a[],int n,int key)
{
    int s=0,e=n-1,mid=s+(e-s)/2,ans;

    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]<key)
        {
            s=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int a[]={1,3,3,3,3,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<"First occurence is at index "<<firstOccurence(a,n,3)<<endl;
    cout<<"Last occurence is at index "<<lastOccurence(a,n,3)<<endl;
    cout<<"Total Number of occurences is "<<lastOccurence(a,n,3)-firstOccurence(a,n,3)+1;
    return 0;
}