#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void merge(int a[],int low,int mid,int high)
{
    vector<int>temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left++]);
        }
        else
        {
            temp.push_back(a[right++]);
        }
    }
    while(left<=mid)
    {
        temp.push_back(a[left++]);
    }
    while(right<=high)
    {
        temp.push_back(a[right++]);
    }

    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}
void mergeSort(int a[],int n,int low,int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(a,n,low,mid);
    mergeSort(a,n,mid+1,high);
    merge(a,low,mid,high);
}
int main(){
    int a[]={5,4,3,2,1};
    int n=5;
    mergeSort(a,n,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}