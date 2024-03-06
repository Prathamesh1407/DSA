// Everybody knows Celebrity ,Celebrity does not know anyone , Find Celebrity i/p : Matrix
//  https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};
    int n = M.size();
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }
    while (st.size() != 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (M[a][b] == 1)
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }
    int ans = st.top();

    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] != 0)
            return -1;
    }
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
            zeroCount++;
    }
    if (zeroCount != 1)
        return -1;
    return ans;
    return 0;
}