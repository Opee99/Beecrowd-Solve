
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b;

        s=0;
        if(a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        for(int i=b; i<=a; i++)
        {

            if(i%13!=0)
            {
                s=s+i;
            }


        }
        cout<<s<<endl;
    }

