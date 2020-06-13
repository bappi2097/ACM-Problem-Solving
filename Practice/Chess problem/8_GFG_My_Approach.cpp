#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void noOfKingMoves(int row,int col,int disr,int disc)
{
    while (row!=disr || col!=disc)
    {
        if(row>disr)
        {
            if(col>disc)
            {
                printf("DL");
                row--;
                col--;
            }
            else if(col<disc)
            {
                printf("DR");
                row--;
                col++;
            }
            else{
                printf("D");
                row--;
            }
        }
        else if(row<disr)
        {
            if(col>disc)
            {
                printf("UL");
                row++;
                col--;
            }
            else if(col<disc)
            {
                printf("UR");
                row++;
                col++;
            }
            else{
                printf("U");
                row++;
            }
        }
        else {
            if(col>disc)
            {
                printf("L");
                col--;
            }
            else if(col<disc)
            {
                printf("R");
                col++;
            }
        }
        printf("\n");
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
