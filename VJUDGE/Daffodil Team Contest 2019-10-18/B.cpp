#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define sf                  scanf
#define sfi(x)              sf("%d",&x)
#define sfii(x,y)           sf("%d %d",&x,&y)
#define sfiii(x,y,z)        sf("%d %d %d",&x,&y,&z)
#define pf                  printf
#define FOR(i,x,y)          for(i=x;i<y;i++)
#define RFOR(i,x,y)         for(i=x;i>=y;i--)
#define input               freopen("input.cpp","r",stdin)
#define output              freopen("output.cpp","w",stdout)
struct node{
    int no=0;
    int index=100;
};
node ar[100];
bool myfunc(node a,node b)
{
    if(a.index!=100 && b.index!=100)return a.index<b.index;
}
bool myfunc2(node a,node b)
{
    return a.no>b.no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    input;
    output;
    #endif // ONLINE_JUDGE
    char str[26];
    sf("%s",str);
    int i,j,len=strlen(str),pot;
    FOR(i,0,len)
    {
        ar[((int)str[i])-97].no++;
        ar[((int)str[i])-97].index=((int)str[i])-97;
    }
    sort(ar,ar+len,myfunc);
    //sort(ar,ar+len,myfunc2);
    FOR(i,0,26)
    {
        int n=ar[i].no;
        while(n--)pf("%c",(ar[i].index+97));
    }
    pf("\n");
    return 0;
}
