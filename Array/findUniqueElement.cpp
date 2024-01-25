//Find unique element, every ele will appear 2 times and a single ele will appear 1 time find that element
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int XOR=0;
    int a[]={1,2,2,3,3,4,1};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        XOR^=a[i];
    }
    cout<<"Unique Element "<<XOR;
    return 0;
}
