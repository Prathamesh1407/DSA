#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={0,1,1,0,0,1,0,1,0,0,1};
    int n=sizeof(a)/sizeof(int);
    int i=0,j=n-1;
    while(i<j)
    {
        while(a[i]==0 && i<n) i++;
        while(a[j]==1 && j>=0) j--;
        if(a[i]==1 && a[j]==0) 
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }   
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}