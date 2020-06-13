#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void noOfKingMoves(int row,int col,int disr,int disc)
{
    while(row!=disr || col!=disc)
    {
        if(row<disr)
        {
            printf("U");
            row++;
        }
        if(row>disr)
        {
            printf("D");
            row--;
        }
        if(col>disc)
        {
            printf("L");
            col--;
        }
        if(col<disc)
        {
            printf("R");
            col++;
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int row,col,disr,disc;
    scanf("%d%d%d%d",&row,&col,&disr,&disc);
    noOfKingMoves(row,col,disr,disc);
    return 0;
}
