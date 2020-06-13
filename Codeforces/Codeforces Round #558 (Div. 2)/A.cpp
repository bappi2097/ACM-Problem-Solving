#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countDivided(int n,int m)
{
    if(m==0)return 1;
    else if(n==m || m==1)return 0;
    else
    {
        if(m>(n-m))return n-m;
        else return m;
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",countDivided(n,m));
    return 0;
}
