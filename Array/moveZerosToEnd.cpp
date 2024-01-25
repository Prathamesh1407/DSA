#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,0,8,0,3,4,1,4,0,5,0};
    int n=sizeof(a)/sizeof(int);
    int i=0,j=0;
    while(i<n)
    {
        if(a[i]!=0) swap(a[i++],a[j++]);
        else i++;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}