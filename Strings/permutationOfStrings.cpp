//https://leetcode.com/problems/permutations/description/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(string s,int ind,vector<string>&ans)
{
    if(ind>=s.length()) 
    {
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<s.length();i++)
    {
        swap(s[i],s[ind]);
        solve(s,ind+1,ans);
        swap(s[i],s[ind]); //backtracking
    }
}
int main(){
    string s="ac";
    vector<string>ans;
    if(s.length()==0) return 0;
    int index=0;
    solve(s,index,ans);
    for(auto &val:ans) cout<<val<<" "; 
    return 0;
}