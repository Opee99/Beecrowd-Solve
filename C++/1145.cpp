#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b){
    for(int i=1;i<=b;i++)
    {
        cout<<i;
        if(i%a==0)
        {
            cout<<endl;
        }
        else
        {
            cout<<" ";
        }

    }
    }
}
