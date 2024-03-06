#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void deleteMiddleElement(stack<int>&st,int count,int size)
{
    if(count==size/2)
    {
        st.pop();
        return;
    }
    int data=st.top();
    st.pop();

    deleteMiddleElement(st,count+1,size);

    st.push(data);
}
int main(){
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    int count=0;
    deleteMiddleElement(st,count,st.size());
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}