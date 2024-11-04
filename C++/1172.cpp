



#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[10],i,n;
    for(i=0;i<10;i++)
    {
        cin>>n;
        if(n<=0)
            a[i]=1;
        else
            a[i]=n;


    }

for(i=0;i<10;i++)
    {
        cout<<"X["<<i<<"] = "<<a[i]<<endl;
    }

}

