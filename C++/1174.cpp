
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a[100];
    int i;

    for(i=0;i<100;i++)
    {
       cin>>a[i];

    }
    for(i=0;i<100;i++)
    {
       if(a[i]<=10){

        printf("A[%d] = %.1f\n",i,a[i]);
       }
    }

}
