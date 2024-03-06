#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> findNextSmallerElement(vector<int> v)
{
    vector<int> ans(v.size());
    stack<int> st;
    st.push(-1);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (st.top() >= v[i])
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main()
{
    vector<int> v = {5, 6, 2, 4, 5};
    vector<int> ans;
    ans = findNextSmallerElement(v);
    for (auto &val : ans)
    {
        cout << val << " ";
    }
    return 0;
}