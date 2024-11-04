


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,sum,temp,t,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        temp=n;
        sum=0;

for(j=1;j<n;j++)
{
    if(n%j==0)
    {
        sum+=j;
    }
}
if(sum==temp)
{
    cout<<temp<<" eh perfeito"<<endl;
}
else
{
     cout<<temp<<" nao eh perfeito"<<endl;
}



    }



}

