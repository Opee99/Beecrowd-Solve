#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    float a,b,c;

    while(cin>>a>>b>>c){

    if(a>=b+c || b>=a+c || c>=a+b)
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
    if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) ||c*c==(b*b)+(a*a) )
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if(a*a>(b*b)+(c*c)||b*b>(a*a)+(c*c)||c*c>(b*b)+(a*a))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a<(b*b)+(c*c)||b*b<(a*a)+(c*c)||c*c<(b*b)+(a*a))
        cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(a==b && b==c && c==a)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if (a== b|| b==c ||a==c)
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }
    }
}
