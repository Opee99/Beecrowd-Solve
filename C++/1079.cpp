#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    float a,b,c,ans;
    scanf("%ld",&t);
    for(long int i=1;i<=t;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        ans=((a*2.0)+(b*3.0)+(c*5.0))/10.0;
        printf("%0.1f\n",ans);

    }

}
