



#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,flag,t,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        flag=0;

        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
               flag=1;
               break;
            }
        }
        if(!flag)
        {
            cout<<n<<" eh primo"<<endl;
        }
        else
        {
            cout<<n<<" nao eh primo"<<endl;
        }



    }



}

