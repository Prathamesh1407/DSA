#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int row,col;
    cin>>row>>col;
    int **arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    
    //Input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //Output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Release Allocated Memory
    for(int i=0;i<col;i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
    return 0;

}