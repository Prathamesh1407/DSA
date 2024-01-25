// 2^10 -> 2^5^2 2^5=2^2^2 * 2 and so on if even direct divide and if odd divide and multiply by base
//TC O(log n)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int base,power;
    cin>>base>>power;
    ll res=1;
    while(power!=0)
    {
        if(power&1)
        {
            // for odd
            res*=base;
        }
        base*=base;
        power=power>>1;
    }
    cout<<res;
    return 0;
}