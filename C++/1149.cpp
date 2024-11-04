

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,i,sum,count;
    cin>>a;
    while(cin>>n)
    {
        if(n<=0)
        {
            continue;
        }
        else
            break;
    }
    count = 0;
    i=a;
    sum=0;
    while(count<n)
    {
       sum+=i;
       count++;
       i++;
    }
    cout<<sum<<endl;

}

