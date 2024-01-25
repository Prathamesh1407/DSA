#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Subset(vector<int>v,int ind,vector<int>output,vector<vector<int>>&ans)
{
    //Base Condition
    if(ind>=v.size()) 
    {
        ans.push_back(output);
        return;
    }

    //Exclude or Not Pick
    Subset(v,ind+1,output,ans);

    //Include or Pick
    int element=v[ind];
    output.push_back(element);
    Subset(v,ind+1,output,ans);

}
int main(){
    vector<int>v{1,2,3};
    //subsets=[{},{1},{2},{3},{1,2},{2,3},{1,3},{1,2,3}]
    //Power Subset=2^n
    vector<vector<int>>ans;
    vector<int>output;
    int Index=0;
    Subset(v,Index,output,ans);
    for(auto &val:ans)
    {
        for(auto &ele:val)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}