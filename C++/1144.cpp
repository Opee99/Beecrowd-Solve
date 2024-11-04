



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,b,c,k=0,n;
    cin>>n;
    for(i=1;i<=2*n;i=i+1)
    {
       if(i%2!=0)
       {
           k++;
           a=k;
           b=k*k;
           c=k*k*k;
           cout<<a<<" "<<b<<" "<<c<<endl;
       }
       else
       {
            cout<<a<<" "<<b+1<<" "<<c+1<<endl;
       }

    }
}

