//TC worst case =  O(n^2) best case = O(n)
//SC O(1)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={66,55,44,33,22,11};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]) 
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false) break; //already Sorted
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}