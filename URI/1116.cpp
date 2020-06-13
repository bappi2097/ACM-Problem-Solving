#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(y==0)cout<<"divisao impossivel"<<endl;
        else if(x==0)cout<<"0.0"<<endl;
        else printf("%.1f\n",(double)x/y);
    }
    return 0;
}
