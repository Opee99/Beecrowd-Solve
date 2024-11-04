#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],n,i,f;
    cin>>n;
    f=n;
    cout<<"N[0] = "<<f<<endl;
    for(i=1;i<10;i++)
    {
        f=f*2;
        cout<<"N["<<i<<"] = "<<f<<endl;
    }

}
