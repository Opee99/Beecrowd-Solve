

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[20],temp,n;
    int i;
    n=20;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=0; i<n/2; i++)
    {

        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

    }

    for(i=0; i<n; i++)
    {

        printf("N[%d] = %d\n",i,a[i]);

    }
}
