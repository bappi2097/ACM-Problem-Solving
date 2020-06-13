#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkPawn(int rw,int cw,int rb,int cb)
{
    while(1)
    {
        if(rw!=8)
        {
            if(rb==rw+1 && abs(cw-cb)==1) return 1;
            else rw++;
        }else return 0;

        if(cw!=1)
        {
            if(rw==rb-1 && abs(cw-cb)==1) return 0;
            else rb++;
        }else return 1;
    }
    return 0;
}
int main()
{
    int rw,cw,rb,cb;
    scanf("%d%d%d%d",&rw,&cw,&rb,&cb);
    printf("%s\n",checkPawn(rw,cw,rb,cb)? "White" : "Black");
    return 0;
}
