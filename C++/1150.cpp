


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z,x,n,i,sum,count;
    cin>>x;
    while(cin>>z)
    {
        if(x>=z)
        {
            continue;
        }
        else
            break;
    }
    count = 0;
    i=x;
    sum=0;
    while(sum<z)
    {
       sum+=i;
       count++;
       i++;
    }
    cout<<count<<endl;

}

