#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a[][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    for (int i = 0; i < 4; i++) // col wise
    {
        if (i % 2 == 0) // top -> bottom
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
        else // bottom -> top
        {
            for(int j=2;j>=0;j--)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}