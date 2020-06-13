#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSquare(int r,int c,int m)
{
    int square=-1;
    for(int i=1;i<=8;i++)for(int j=1;j<=8;j++)if(max(abs(r-i),abs(c-j))<=m)square++;
    return square;
}
int main()
{
    int r,c,m;
    scanf("%d%d%d",&r,&c,&m);
    printf("%d\n",countSquare(r,c,m));
    return 0;
}
