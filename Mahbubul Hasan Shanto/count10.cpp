#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ar[16]={0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,0};
    int maxn=0,count=0;
    for(int i=0;i<=15;i++)
    {
        if(ar[i])count++;
        else
        {
            if(maxn<count)maxn=count;
            count=0;
        }
    }
    printf("%d\n",maxn);
    return 0;
}
