#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isSafe(vector<vector<int>>&v,vector<vector<int>>visited,int n,int x,int y)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && v[x][y]==1) return true;
    else 
    {
        return false; 
    }
}
void solve(vector<vector<int>>&v,vector<vector<int>>visited,int n,int x,int y,vector<string>&ans,string path)
{
    if(x==n-1 && y==n-1) 
    {
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;
    //Down
    int newX=x+1,newY=y;
    if(isSafe(v,visited,n,newX,newY))
    {
        path.push_back('D');
        solve(v,visited,n,newX,newY,ans,path);
        path.pop_back();
    }

    //Up
    newX=x-1,newY=y;
    if(isSafe(v,visited,n,newX,newY))
    {
        path.push_back('U');
        solve(v,visited,n,newX,newY,ans,path);
        path.pop_back();
    }

    //Left
    newX=x,newY=y-1;
    if(isSafe(v,visited,n,newX,newY))
    {
        path.push_back('L');
        solve(v,visited,n,newX,newY,ans,path);
        path.pop_back();
    }

    //Right
    newX=x,newY=y+1;
    if(isSafe(v,visited,n,newX,newY))
    {
        path.push_back('R');
        solve(v,visited,n,newX,newY,ans,path);
        path.pop_back();
    }
    visited[x][y]=0;
}
int main()
{
    vector<vector<int>> v{{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string>ans;
    vector<vector<int>>visited=v;
    int n=v.size(),srcx=0,srcy=0;
    string path;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    solve(v,visited,n,srcx,srcy,ans,path);
    for(auto val:ans) cout<<val<<" ";
    return 0;
}