//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s;
    cin>>s;
    int a[26]={0},n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        a[s[i]-97]++;
    }
    int maxi=INT_MIN,ind;
    for(int i=25;i>=0;i--)
    {
        if(a[i]>=maxi)
        {
            maxi=a[i];
            ind=i;
        }
    }
    cout<<char(97+ind);
    return 0;
}