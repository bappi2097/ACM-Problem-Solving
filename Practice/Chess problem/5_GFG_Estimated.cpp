#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkAttack(int bishopX,int bishopY,int pawnX,int pawnY)
{
    if(pawnX-bishopX==pawnY-bishopY)return 1;
    else if(-pawnX+bishopX==pawnY-bishopY)return 1;
    else return 0;
}
int main()
{
    int bishopX,bishopY,pawnX,pawnY;
    scanf("%d%d%d%d",&bishopX,&bishopY,&pawnX,&pawnY);
    printf("%s\n",checkAttack(bishopX,bishopY,pawnX,pawnY)? "Yes" : "No");
    return 0;
}
