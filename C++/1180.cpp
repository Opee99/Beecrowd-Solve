#include<bits/stdc++.h>
using namespace std;
int main()
{

  int a[1000],n,i,min,pos;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    min=a[0];
    pos=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }

    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<pos<<endl;
}
