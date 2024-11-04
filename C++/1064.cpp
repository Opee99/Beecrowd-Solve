#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,i,s=0,pos=0;

    for(i=1; i<=6; i++)
    {

        cin>>n;

        if(n>0)
        {
            pos++;
            s=s+n;
        }

    }
    cout<<pos<<" valores positivos"<<endl;
    printf("%.1f\n",s/pos);

}


