#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSquare(int r,int c,int m)
{
    int a=r-m,b=r+m,d=c-m,e=c+m;
    if(a<1)a=1;
    if(b>8)b=8;
    if(d<1)d=1;
    if(e>8)e=8;
    return (b-a+1)*(e-d+1)-1;
}
int main()
{
    int r,c,m;
    scanf("%d%d%d",&r,&c,&m);
    printf("%d\n",countSquare(r,c,m));
    return 0;
}
