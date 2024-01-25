#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//Complexity O(logn)
int main(){
    int a[]={2,6,8,9,10,13};
    int key=13,flag=0;
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            cout<<"Found at index "<<mid;
            flag=1;
            break;
        }
        else if(a[mid]<key) s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    if(flag==0) cout<<"Not Found";
    return 0;
}