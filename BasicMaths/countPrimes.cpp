// TC : O(n*log(log n))
// lec 24 https://leetcode.com/problems/count-primes/description/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<bool> primes(n + 1, true);
    int c = 0;
    primes[0] = primes[1] = false;

    for (int i = 2; i*i <= n; i++)
    {
        if (primes[i])
        {
            c++;

            for (int j = i * i; j < n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    cout << c;
    return 0;
}