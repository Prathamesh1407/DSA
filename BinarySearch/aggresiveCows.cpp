#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int isPossible(int a[],int n,int m,int mid)
{
    int cowsCount=1,lastPos=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]-lastPos>=mid)
        {
            cowsCount++;
            if(cowsCount==m) return true;
            lastPos=a[i];
        }
    }
    return false;
}
int main(){
    int a[]={1,3,100,6,7};
    int m=3,maxi=INT_MIN,mini=0;
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        maxi=max(a[i],maxi);
    }
    int s=mini,e=maxi,mid=s+(e-s)/2,ans=-1;

    while(s<=e)
    {
        if(isPossible(a,n,m,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
    return 0;
}