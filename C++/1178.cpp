
#include<bits/stdc++.h>
using namespace std;

int main()
{

    double n,a[100];
    int j;
    scanf("%lf",&n);
     a[0]=n;
    for(j=0; j<100; j++)
    {
        printf("N[%d] = %.4lf\n",j,a[j]);
        n=n/2;
        a[j+1]=n;

    }

}


