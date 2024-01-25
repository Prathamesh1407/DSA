//https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(string digits,string mapping[],int index,string output,vector<string>&ans)
{
    if(index>=digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number=digits[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,mapping,index+1,output,ans);
        output.pop_back();//It will remove added character so that we can start with empty string again in next iteration.
    }
}
int main(){
    string digits="34",output;
    vector<string>ans;
    if(digits.length()==0) return 0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int index=0;
    solve(digits,mapping,index,output,ans);
    for(auto &val:ans) cout<<val<<" "; 
    return 0;
}