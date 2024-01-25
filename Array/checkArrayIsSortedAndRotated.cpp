//LEC NO 21
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={2,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int);
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i]) c++;
    }
    if(a[n-1]>a[0]) c++;
    if(c<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}