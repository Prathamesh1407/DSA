#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void insertAtBottom(stack<int>&st,int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    int data=st.top();
    st.pop();

    insertAtBottom(st,x);
    st.push(data);
}
void reverseStack(stack<int>&st)
{
    if(st.empty()) return;
    int data=st.top();
    st.pop(); 
    reverseStack(st);
    insertAtBottom(st,data);
}
int main(){
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    reverseStack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}