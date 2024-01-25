#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fastExponentian(int base,int power)
{
    if(power==0) return 1;
    if(power==1) return base;

    int ans=fastExponentian(base,power/2);

    if(power&1)
    {
        //Odd
        return base*ans*ans;
    }
    else
    {
        //Even
        return ans*ans;
    }
}
int main(){
    int base,power;
    cin>>base>>power;
    cout<<fastExponentian(base,power);
    return 0;
}