#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSquareBishop(int row,int col)
{
   int square=min(row,col)-1;
   square+=8-max(row,col);
   square+=min(row,9-col)-1;
   square+=8-max(row,9-col);
    return square;
}
int main()
{
    int rw , cl;
    scanf("%d%d",&rw,&cl);
    printf("%d\n",countSquareBishop(rw,cl));
    return 0;
}
