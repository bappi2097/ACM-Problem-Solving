#include <bits/stdc++.h>
using namespace std;

#define si(n)           scanf("%d",&n)
#define sf              scanf
#define pi(n)           printf("%d\n",n)
#define pf              printf
#define FOR(x,y)        for(int i=x;i<y;i++)
#define READ()          freopen("input.txt","r",stdin)
#define maxn            200005

int n,ar[maxn],mn=1000000;

int main()
{
    si(n);
    FOR(0,n)si(ar[i]);
    FOR(0,n-1)if(abs(ar[i]-ar[i+1])<mn)mn=abs(ar[i]-ar[i+1]);
    pi(mn);
    return 0;
}
