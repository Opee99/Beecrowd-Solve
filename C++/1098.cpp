


#include<bits/stdc++.h>
using namespace std;

int main()
{
    float i,j,k=.8,p;
    int m,n;
    for(i=0;i<2.2;i=i+.2)
    {

        k=k+.2;
        p=k;
        for(j=1; j<=3; j++)
        {
            if(i==0.0 || i==1.0 || i>1.9)
            {
                m=(int)i;
                n=(int)p;

                printf("I=%d J=%d\n",m,n);
            }

            else{
            printf("I=%.1f J=%.1f\n",i,p);
            }
            p=p+1.0;
        }

    }
}

