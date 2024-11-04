#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,d1,d2,m1,m2,s1,s2,h,d,m,s;
    char str1[4],str2[4],a[2],b[2],c[2],e[2];
    cin>>str1>>d1;
    cin>>h1>>a>>m1>>b>>s1;
    cin>>str2>>d2;
    cin>>h2>>c>>m2>>e>>s2;

    if(s2<s1)
    {
        s2=s2+60;
        m2=m2-1;
    }
if(m2<m1)
    {
        m2=m2+60;
        h2=h2-1;
    }
    if(h2<h1)
    {
        h2=h2+24;
        d2=d2-1;
    }
    d=d2-d1;
    h=h2-h1;
    m=m2-m1;
    s=s2-s1;
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
}
