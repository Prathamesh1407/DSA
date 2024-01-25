#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,2,4,5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]<a[mid+1]) s=mid+1;
        else e=mid;
        mid=s+(e-s)/2;
    }
    cout<<s;
    return 0;
}