// GCD(x,y) = GCD(x - y,y) or GCD(x % y,y)
// LCM(x,y) * GCD(x,y) = x * y
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int main()
{
    int a = 10, b = 2;
    cout << GCD(a, b);
    return 0;
}