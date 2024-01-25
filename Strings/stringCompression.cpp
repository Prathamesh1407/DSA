#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    char a[]={'a','a','a','b','b','b','b','b','c','c','a'};
    int i=0; //starting of array
    int ansIndex=0;//will show final index of compressed array
    int n=sizeof(a)/sizeof(char);
    while(i<n)
    {
        int j=i+1;
        while(j<n && a[i]==a[j])
        {
            j++;
        }
        //Now the j will be either at the end of the array or will be on different character
        a[ansIndex++]=a[i];
        int cnt=j-i;
        if(cnt>1)
        {
            string s=to_string(cnt);
            for(char ch:s) a[ansIndex++]=ch;
        }
        i=j;
    }
    for(char ch:a) cout<<ch<<" ";
    cout<<endl<<ansIndex;
    return 0;
}