#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={7,9,1,2,4,5,6};//rotated sorted array
    // 7 -> 9 drop 1 -> 2 -> 4 -> 5 -> 6 therefore 1 is the pivot element
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]>=a[0]) s=mid+1;
        else e=mid;
        mid=s+(e-s)/2;
    }
    cout<<s;
    return 0;
}