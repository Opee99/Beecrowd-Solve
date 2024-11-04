


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,j,a,b,count,sum;
   while(1)
    {
        cin>>a;
        if(a==0)
            break;
        count=0;
        sum=0;
        j=a;
        while(count<5)
        {
            if(j%2==0)
            {
                sum+=j;
                count++;
            }
            j++;
        }
 cout<<sum<<endl;
    }


}

