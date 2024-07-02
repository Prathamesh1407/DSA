#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    // TC :2^N Exponential as one func call gives rise to two more calls
    // SC :O(N) as the maximum depth of the recursion tree is N.
    // using recursion
    cout << fib(5);

    // TC :O(N) maximum only N calls all from the left side
    // SC :O(N + N) for dp and stack
    // Using Memoization Top-Down
    int n = 5;
    vector<int> dp(n + 1, -1);
    cout << fib(n, dp);

    // TC :O(N)
    // SC :O(N) for dp
    // using Tabulation Bottom-Up
    n = 5;
    vector<int> dp2(n + 1);
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp2[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];

    // TC :O(N)
    // SC :O(1)
    int prev2 = 0, prev = 1, currInd;
    for (int i = 2; i <= n; i++)
    {
        currInd = prev + prev2;
        prev2 = prev;
        prev = currInd;
    }
    cout << prev;
    return 0;
}