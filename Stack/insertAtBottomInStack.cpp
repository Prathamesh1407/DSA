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
int main(){
    stack<int>st;
    int x=9;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    insertAtBottom(st,x);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}