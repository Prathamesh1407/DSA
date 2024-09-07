#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={66,55,44,33,22,11};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(a[j-1]>a[j]) swap(a[j-1],a[j]);
            else break;
        }
    }    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}