#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    double c=0,r=0,s=0,a=0;
    char ch;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>ch;
        if(ch=='C')c+=a;
        else if(ch=='R')r+=a;
        else if(ch=='S')s+=a;
    }
    cout<<"Total: "<<c+r+s<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    printf("Percentual de coelhos: %.2f %\n",(double)(c/(c+r+s))*100);
    printf("Percentual de ratos: %.2f %\n",(double)(r/(c+r+s))*100);
    printf("Percentual de sapos: %.2f %\n",(double)(s/(c+r+s))*100);
    return 0;
}
