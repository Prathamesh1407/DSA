#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> nextSmallerElement(vector<int>heights)
{
    stack<int>st;
    int n=heights.size();
    st.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--)
    {
        while(st.top()!=-1 && heights[st.top()]>=heights[i])
        {
            st.pop();
        }
        //top is the smallest element
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int> previousSmallerElement(vector<int>heights)
{
    stack<int>st;
    int n=heights.size();
    st.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        while(st.top()!=-1 && heights[st.top()]>=heights[i])
        {
            st.pop();
        }
        //top is the smallest element
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int>heights={2,1,5,6,2,3};
    vector<int>next=nextSmallerElement(heights);
    vector<int>previous=previousSmallerElement(heights);
    int n=heights.size();
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int l=heights[i];

        if(next[i]==-1)
        {
            next[i]=n;
        }
        int b=next[i]-previous[i]-1;

        int newarea=l*b;
        area=max(newarea,area);
    }

    for(auto val:next)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto val:previous)
    {
        cout<<val<<" ";
    }
    cout<<endl<<area;

    return 0;
}