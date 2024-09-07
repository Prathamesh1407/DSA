#include<bits/stdc++.h>
#include "DirectedGraph.cpp"
using namespace std;
typedef long long int ll;

vector<vector<int>> floydWarshall(vector<vector<int>>matrix,int n)
{
    for(int via=0;via<n;via++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //from i => j via 0 => n
                // if i -> j via 0 then i -> 0 then 0 -> j
                if(matrix[i][via]==INT_MAX || matrix[via][j]==INT_MAX) continue;
                matrix[i][j]=min(matrix[i][j],matrix[i][via]+matrix[via][j]);
            }
        }
    }
    return matrix;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>adjMatrix(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>adjMatrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(adjMatrix[i][j]==-1) adjMatrix[i][j]=INT_MAX;
        }
    }

    vector<vector<int>>ans;
    ans=floydWarshall(adjMatrix,n);

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ans[i][j]==INT_MAX) ans[i][j]=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}