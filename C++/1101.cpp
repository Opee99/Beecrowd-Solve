

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,s,i;

    while(cin>>a>>b)
    {

        if(a>0 && b>0)
        {
            if(a<b)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }
            s=0;
            for(i=b; i<=a; i++)
            {
                cout<<i<<" ";
                s+=i;
            }
            cout<<"Sum="<<s<<endl;
        }
        else
        {
            return 0;
        }
    }
}
