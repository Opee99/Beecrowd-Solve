


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    map<int,string>m;
        m[61]="Brasilia";
        m[71]="Salvador";
        m[11]="Sao Paulo";
        m[21]="Rio de Janeiro";
        m[32]="Juiz de Fora";
        m[19]="Campinas";
        m[27]="Vitoria";
        m[31]="Belo Horizonte";

    while(cin>>a)
    {
     if(a!= 61 && a!= 71 && a!= 11 && a!= 21 && a!= 32 && a!= 19 && a!= 61 && a!= 27 && a!= 31)
     {
         cout<<"DDD nao cadastrado"<<endl;
     }
     else
     {
          cout<<m.at(a)<<endl;
     }


    }
}
