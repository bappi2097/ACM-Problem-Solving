#include<bits/stdc++.h>
using namespace std;
int mark[10000007];
void sieve(int n)
{
    int limit=sqrt(n)+2;
    mark[0]=1;
    mark[1]=1;
    for(int i=4;i<=n;i+=2)mark[i]=1;
    for(int i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            if(i<limit)
            {
                for(int j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    sieve(10000007);
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(!mark[i]&&!mark[n-i])
        {
            cout<<i<<' '<<n-i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
