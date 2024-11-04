#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,s,i;

    while(scanf("%lld%lld",&a,&b)==2){
            s=0;
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=b+1;i<a;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
    printf("%lld\n",s);
}}
