#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[100],max,flag=0;
    for(int i=0; i<100; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=0; i<100; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            flag=i+1;
        }
    }
    cout<<max<<endl;
    cout<<flag<<endl;
}
