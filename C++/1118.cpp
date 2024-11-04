
#include<bits/stdc++.h>
using namespace std;

int main()
{

    float x,y;
    while(1){
    float c=0,n;
    vector<float>v;
    while(c<2)
    {
        cin>>x;
        if(x>=0 && x<=10)
        {
            v.push_back(x);
            c++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }

    }

    float avg=(v.at(0)+v.at(1))/2;
    printf("media = %.2f\n",avg);
    again:
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>n;
    if(n<1 || n>2)
    {
        goto again;
    }

    else if(n==2)
    {
        break;
    }

}
}
