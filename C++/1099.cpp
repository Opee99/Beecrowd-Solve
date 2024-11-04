


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,i,j,s;
    cin>>t;
    for(i=1; i<=t; i++)
    {

        while(cin>>a>>b)
        {
            s=0;
            if(a<b)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }

            for(j=b+1; j<a; j++)
            {
                if(j%2!=0)
                {
                    s+=j;
                }
            }
cout<<s<<endl;

        }

    }
}
