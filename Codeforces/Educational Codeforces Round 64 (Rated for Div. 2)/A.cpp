#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 202
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif // ONLINE_JUDGE
    int t,a[size],i=0,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)scanf("%d",&a[i]);
    for(i=0; i<t-1; i++)
    {
        if((a[i]==2 && a[i+1]==3) || (a[i]==3 && a[i+1]==2))
        {
            printf("Infinite\n");
            return 0;
        }
        else if((a[i]==1 && a[i+1]==2) || (a[i]==2 && a[i+1]==1))sum+=3;
        else if((a[i]==1 && a[i+1]==3) || (a[i]==3 && a[i+1]==1))sum+=4;
        else return 0;
    }
    printf("Finite\n%d\n",sum);
    return 0;
}
