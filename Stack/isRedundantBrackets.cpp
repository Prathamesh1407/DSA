#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isRedundant(stack<char> st, string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else
        {
            // Closing Bracket
            
            if (s[i] == ')')
            {
                bool redundant=true;
                while (st.top() != '(')
                {
                    char ch = st.top();
                    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
                    {
                        redundant=false;
                    }
                    st.pop();
                }
                if(redundant==true) return true;
                st.pop();
            }
        }
    }
    return false;
}
int main()
{
    stack<char> st;
    string s = "(a+c*b)+c";

    cout << (isRedundant(st, s) ? "Redundant" : "Essential");
    return 0;
}