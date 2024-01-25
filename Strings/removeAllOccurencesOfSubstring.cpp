//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s="daabcbaabcbc",part="abc";
    while(s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    cout<<s;
    return 0;
}