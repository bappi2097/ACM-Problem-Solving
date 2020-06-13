#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkAttack(int bishopX ,int bishopY ,int pawnX ,int pawnY )
{
    for(int i=bishopX,j=bishopY;i>=1 && j>=1;i--,j--)if(i==pawnX && j==pawnY)return 1;
    for(int i=bishopX,j=bishopY;i<=8 && j<=8;i++,j++)if(i==pawnX && j==pawnY)return 1;
    for(int i=bishopX,j=bishopY;i>=1 && j<=8;i--,j++)if(i==pawnX && j==pawnY)return 1;
    for(int i=bishopX,j=bishopY;i<=8 && j>=1;i++,j--)if(i==pawnX && j==pawnY)return 1;
    return 0;
}
int main()
{
    int bishopX , bishopY , pawnX , pawnY ;
    scanf("%d%d%d%d",&bishopX,&bishopY,&pawnX,&pawnY);
    printf("%s\n",checkAttack( bishopX , bishopY , pawnX , pawnY ) ? "Yes" : "No");
    return 0;
}
