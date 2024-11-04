


#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int count=0,t,n,j,a[1000];
    t=1000;
    cin>>n;

    for(j=0; j<t; j++)
    {
       if(j%n==0)
       {
           count=0;
       }
       else
       {
           count++;
       }
    printf("N[%d] = %d\n",j,count);
    }
}


