#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,s;
    char n1[100],n2[100],s1[10],s2[10];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        scanf("%s %s %s %s",n1,s1,n2,s2);
        cin>>a>>b;
        s=a+b;
        if(s1[0]=='P')
        {
            if(s%2==0)cout<<n1<<'\n';
            else cout<<n2<<'\n';
        }
        else
        {
            if(s%2==1)cout<<n1<<'\n';
            else cout<<n2<<'\n';
        }
    }
    return 0;
}
