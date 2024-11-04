
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,s;
    int c=0;
    while(c<2)
    {
        scanf("%f",&a);
        if(a>=0 && a<=10)
        {
            c++;
            s=s+a;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
    }
    printf("media = %.2f\n",s/2);
}
