#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n) swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}