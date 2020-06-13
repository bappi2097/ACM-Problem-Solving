#include<bits/stdc++.h>
using namespace std;

#define sf          scanf
#define pf          printf
#define si(n)       scanf("%d",&n)
#define pi(n)       printf("%d\n",n)
#define maxn        2000006
int fact(int n)
{
    if(n>1)return n*fact(n-1);
    else return 1;
}
int main()
{
    int n;
    si(n);
    pi(fact(n));
    return 0;
}
