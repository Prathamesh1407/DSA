#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Fibonacci(int n,int firstTerm,int secondTerm)
{
    if(n<=0) return firstTerm;
    int thirdTerm=firstTerm+secondTerm;
    return Fibonacci(n-1,secondTerm,thirdTerm);

}
int main(){
    int n; cin>>n;
    int n1=0,n2=1;
    if(n==1) return 0;
    if(n==2) return 1;
    int fibEle=Fibonacci(n-1,n1,n2);
    cout<<fibEle;
    return 0;
}