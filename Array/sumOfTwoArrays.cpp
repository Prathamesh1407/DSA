#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,2,3,5};
    int b[]={9,9,7,4};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    int carry=0,sum,i=n-1,j=m-1;
    vector<int>v;
    while(i>=0 && j>=0)
    {
        int val1=a[i],val2=b[j];

        int sum=val1+val2+carry;

        carry=sum/10;
        sum=sum%10;

        v.push_back(sum);
        i--; j--;
    }

    //First Case : when first array is longer than other

    while(i>=0)
    {
        int sum=a[i]+carry;

        carry=sum/10;
        sum=sum%10;

        v.push_back(sum);
        i--;
    }

    //Second Case: when second array is longer than other

    while(j>=0)
    {
        int sum=b[j]+carry;

        carry=sum/10;
        sum=sum%10;

        v.push_back(sum);
        j--;
    }

    //Third Case : Carry is remaining
    while(carry!=0)
    {
        int sum=carry;

        carry=sum/10;
        sum=sum%10;

        v.push_back(sum);
    }

    reverse(v.begin(),v.end());

    for(auto val:v) cout<<val<<" ";
    return 0;
}