
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,temp;
    while(cin>>a>>b){
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a%b!=0)
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Sao Multiplos"<<endl;
    }
}}
