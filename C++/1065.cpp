#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,even=0;

    for(i=1; i<=5; i++)
    {

        cin>>n;

        if(n%2==0)
        {
            even++;
        }

    }
    cout<<even<<" valores pares"<<endl;

}

