#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Subsequence(string s,int ind,string p,vector<string>&ans)
{
    if(ind>=s.length())
    {
        ans.push_back(p);
        return;
    }

    //Exclude
    Subsequence(s,ind+1,p,ans);

    //Include
    p+=s[ind];
    Subsequence(s,ind+1,p,ans);
}
int main(){
    string s="abc",p="";
    vector<string>ans;
    Subsequence(s,0,p,ans);
    for(auto val:ans) cout<<val<<endl;
    return 0;
}