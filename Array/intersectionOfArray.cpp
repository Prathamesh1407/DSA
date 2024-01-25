#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,1,2,3,4,4,5};
    int b[]={2,3,3,4,5};
    vector<int>v;
    int n=sizeof(a)/sizeof(int),k=sizeof(b)/sizeof(int);
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
        else 
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}