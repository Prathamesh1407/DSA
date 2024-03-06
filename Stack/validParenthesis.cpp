#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool solve(stack<char> &st, string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()) return false;
            char ch = st.top();
            if ((ch == '[' && s[i] == ']') || ((ch == '(' && s[i] == ')')) || (ch == '{' && s[i] == '}'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (st.empty()) return true;
}
int main()
{
    string s = "[()]{}{[()()]()}";
    stack<char> st;
    cout << (solve(st, s) ? "VALID" : "INVALID");
    return 0;
}