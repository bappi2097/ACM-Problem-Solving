#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("testcase.txt","r",stdin);
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)cout<<0<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}
