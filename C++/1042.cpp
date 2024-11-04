#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int a[3],i,n;
    for(i=0;i<3;i++)
    {
        cin>>n;

        v.push_back(n);
        a[i]=n;
    }
    sort(v.begin(),v.end());
    for(i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
}
