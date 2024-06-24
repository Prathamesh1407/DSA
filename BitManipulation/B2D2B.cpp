#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string D2B(int n)
{
    string ans="";
    while(n!=0)
    {
        if(n%2==1) ans+='1';
        else ans+='0';
        n/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int B2D(string s)
{
    int ans=0,power=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1') ans+=((s[i]-'0')*power);
        power*=2;
    }
    return ans;
}
int main(){
    int n=9;
    cout<<D2B(n)<<endl;
    string s="1010";
    cout<<B2D(s);
    return 0;
}