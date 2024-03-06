#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void sortedInsert(stack<int>&st,int x)
{
    if(st.empty() ||(!st.empty() && st.top()<x)) 
    {
        st.push(x);
        return;
    }
    int data=st.top();
    st.pop();
    sortedInsert(st,x);
    st.push(data);
}
void sortStack(stack<int>&st)
{
    if(st.empty()) return;

    int data=st.top();
    st.pop();

    sortStack(st);
    sortedInsert(st,data);
}
int main(){
    stack<int>st;
    st.push(-4);
    st.push(-5);
    st.push(6);
    st.push(9);
    st.push(8);
    sortStack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}