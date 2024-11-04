#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,count=0;
    cin>>n;
    i=n;
    while(count<6)
    {
        if(i%2!=0)
        {
            count++;
            cout<<i<<endl;
        }
        i++;
    }

}
