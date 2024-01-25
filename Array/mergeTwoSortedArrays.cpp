#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,8};    
    int n=sizeof(a)/sizeof(int),m=sizeof(b)/sizeof(int);
    int* c=new int[n+m];
    int i=0,j=0,p=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j]) 
        {
            c[p++]=a[i];
            i++;
        }
        else if(a[i]>b[j])
        {
            c[p++]=b[j];
            j++;
        }
        else 
        {
            c[p++]=a[i];
            c[p++]=b[j];
            i++;
            j++;
        }
    }
    while(i<n)
    {
        c[p++]=a[i];
        i++; 
    }
    while(j<m)
    {    
        c[p++]=b[j];
        j++;
    }
    for(int i=0;i<n+m;i++) cout<<c[i]<<" "; 
    return 0;
}