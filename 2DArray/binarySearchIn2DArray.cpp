#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    int row=3,col=4;
    int s=0,e=row*col-1,mid=s+(e-s)/2;
    int key=33333;
    while(s<=e)
    {
        int element=a[mid/col][mid%col];
        if(element==key) 
        {
            cout<<"Found";
            return 1;
        }
        if(element>key) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return 0;
}