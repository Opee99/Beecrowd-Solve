#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,pos=0,neg=0,odd=0,even=0;

    for(i=1; i<=5; i++)
    {

        cin>>n;

        if(n%2!=0)
        {
            odd++;
        }
        else
        {
            even++;
        }
        if(n>0)
        {
            pos++;

        }
        else if(n<0)
        {
            neg++;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;

}
