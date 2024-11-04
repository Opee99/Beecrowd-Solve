

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,j,a,b,count,sum;
    cin>>t;
    for(i=1; i<=t; i=i+1)
    {
        count=0;
        sum=0;
        cin>>a>>b;
        j=a;
        while(count<b)
        {
            if(j%2!=0)
            {
                sum+=j;
                count++;
            }
            j++;
        }
 cout<<sum<<endl;
    }


}

