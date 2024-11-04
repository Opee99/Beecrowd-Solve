

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,p,readjust, new_sal;
    int q;

    while(scanf("%f",&n)==1)
    {

        if(n>=0 && n<=400)
        {
            p=0.15;
            q=15;
        }
        else if(n>=400.01 && n<=800)
        {
            p=0.12;
            q=12;

        }
        else if(n>=800.01 && n<=1200)
        {
            p=0.10;
            q=10;
        }
        else if(n>=1200.01 && n<=2000)
        {
            p=0.07;
            q=7;
        }
        else if(n>2000)
        {
            p=0.04;
            q=4;
        }
        readjust= n*p;
        new_sal= n+ readjust;

        printf("Novo salario: %.2f\n",new_sal);
        printf("Reajuste ganho: %.2f\n",readjust);
        printf("Em percentual: %d %\n",q);

    }
}
