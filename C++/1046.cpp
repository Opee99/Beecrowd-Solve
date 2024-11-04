

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,h;

    while(cin>>a>>b)
    {

        if(a>=b)
        {
            b+=24;
        }
        h=b-a;
        cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<endl;

    }
}
