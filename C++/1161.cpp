#include<bits/stdc++.h>
using namespace std;
long long int fact(int a)
{
    if(a==0 || a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    long long int a,b,c;
    while(cin>>a>>b)
    {
        c=fact(a)+ fact(b);
        cout<<c<<endl;
    }
}
