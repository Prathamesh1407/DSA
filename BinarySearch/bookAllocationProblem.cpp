//https://www.codingninjas.com/studio/problems/allocate-books_1090540
//vdo No:15
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int isPossible(int a[],int n,int m,int mid)
{
    int stdCount=1,pagesSum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesSum+a[i]<=mid) 
        {
            pagesSum+=a[i];
        }
        else 
        {
            stdCount++;
            if(stdCount>m || a[i]>mid) return false;
            pagesSum=a[i];
        }
    }
    return true;
}
int main(){
    int a[]={10,20,30,40};
    int m=2;//No. of Students
    int sum=0,n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++) 
    {
        sum+=a[i];
    }
    int s=0,e=sum,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(a,n,m,mid))
        {
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    cout<<s;
    return 0;
}