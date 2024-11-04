

#include<bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long int i,t,n,j,a[100];
    cin>>t;
    for(j=1; j<=t; j++)
    {

        cin>>n;

            a[0]=0;
            a[1]=1;
            for(i=2; i<=n; i++)
            {
                a[i]=a[i-1]+a[i-2];
            }
            cout<<"Fib("<<n<<") = "<<a[n]<<endl;


    }
}


