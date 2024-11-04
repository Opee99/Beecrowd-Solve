


#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);

}
int main()
{
    int x,i;
    cin>>x;
    for(i=0;i<x;i++)
    {
    cout<<fibo(i);
    if(i==x-1)
    {
        continue;
    }
    cout<<" ";
    }
    cout<<endl;

}

