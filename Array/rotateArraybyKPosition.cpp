#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> rotateByKPosition(int a[],int k,int n)
{
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        v[(i+k)%n]=a[i];
    }
    return v;
}
int main(){
    int a[]={2,5,6,7,8,9,10};
    int k=4;
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    v=rotateByKPosition(a,k,n);
    for(auto val:v) cout<<val<<" "; 
    return 0;
}