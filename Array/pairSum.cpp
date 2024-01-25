#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[]={1,2,3,-1,-3,-2};
    int key=0;
    int n=sizeof(a)/sizeof(int);
    vector<vector<int>>v;
    //1st Approach
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]+a[j]==key)
    //         {
    //             vector<int>p;
    //             p.push_back(min(a[i],a[j]));
    //             p.push_back(max(a[i],a[j]));
    //             v.push_back(p);
    //         }
    //     }
    // }
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v[0].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl; 
    // }

    //2nd Approach
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]>key) break;
            if(a[i]+a[j]==key)
            {
                vector<int>p;
                p.push_back(a[i]);
                p.push_back(a[j]);
                v.push_back(p);
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}