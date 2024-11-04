
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,gre=0,in=0,gr=0,d=0,n;

    while(1)
    {
        cin>>x>>y;
        gre++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        if(x>y)
            {
                in++;
            }
            else if(x<y)
            {
                gr++;
            }
            else
            {
                d++;
            }
        cin>>n;
        if(n==2)
            break;
    }
cout<<gre<<" grenais"<<endl;
cout<<"Inter:"<<in<<endl;
cout<<"Gremio:"<<gr<<endl;
cout<<"Empates:"<<d<<endl;
if(in>gr)
{
    cout<<"Inter venceu mais"<<endl;
}
else if(in<gr)
{
    cout<<"Gremio venceu mais"<<endl;
}
else
{
    cout<<"Não houve vencedor"<<endl;
}
}
