#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findSqrt(ll n)
{
    ll s = 0, e = n, mid = s + (e - s) / 2, ans;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}
double findMorePrecise(ll n, ll sqrt, int precision)
{
    double factor = 1;
    double ans = sqrt;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    ll n = 78;
    ll Sqrt = findSqrt(n);
    double pSqrt = findMorePrecise(n, Sqrt, 3);
    cout << pSqrt;
    return 0;
}