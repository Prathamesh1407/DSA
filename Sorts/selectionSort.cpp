//TC worst case = best case = O(n^2)
//SC O(1)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={66,55,44,33,22,11};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j]) minIndex=j; 
        }
        swap(a[i],a[minIndex]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}