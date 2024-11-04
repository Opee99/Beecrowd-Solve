#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    while(scanf("%f%f%f",&a,&b,&c)==3)
    {
        if(a>=b+c || b>=a+c || c>=a+b)
        {
            printf("Area = %.1f\n",(a+b)*c*0.5);
        }
        else
        {
            printf("Perimetro = %.1f\n",a+b+c);
        }

    }

}
