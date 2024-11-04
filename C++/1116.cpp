


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a,b;
    float c;
  cin>>t;
  for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            c=(float)a/b;
            printf("%.1f\n",c);
        }
    }
}
