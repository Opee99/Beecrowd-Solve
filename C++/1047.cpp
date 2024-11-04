

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int h1,h2,m1,m2,m,h;

    while(cin>>h1>>m1>>h2>>m2)
    {
            if(m1>m2)
            {
                m2+=60;
                h2-=1;
            }
            if(h1>h2)
            {
                h2+=24;
            }

            if(h1==h2 && m1==m2)
            {
                h2+=24;
            }
            m=m2-m1;
            h=h2-h1;
            cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;


    }
}
