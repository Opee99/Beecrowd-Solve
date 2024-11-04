



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,s=0;
    while(cin>>n)
    {
        if(n<0)
            break;
        s=s+n;
        c++;
    }
    printf("%.2f\n",(float)s/c);

}

