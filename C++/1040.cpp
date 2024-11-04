

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n1,n2,n3,n4,n5,avg,avg1;
    while(scanf("%f%f%f%f",&n1,&n2,&n3,&n4)==4){
    avg=(.02*n1 + .03*n2 + .04*n3 + .01*n4)*10;
    printf("Media: %0.1f\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %0.1f\n",n5);
        avg1=(avg+n5)/2.0;
        if(avg1>=5.0)
        {

              printf("Aluno aprovado.\n");
        }
        else if(avg1<=4.9)
        {
               printf("Aluno reprovado.\n");
        }

         printf("Media final: %0.1f\n",avg1);

    }
    }
}
