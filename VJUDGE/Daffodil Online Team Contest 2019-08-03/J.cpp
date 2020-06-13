#include<bits/stdc++.h>
using namespace std;
int mark[30000000],b,ans[30000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLIE_JUDGE
    int n,m,q,mod=30000000;
    cin>>n>>m>>q;
    for(int i=0;i<m;i++)
    {
        cin>>ans[i];
        mark[ans[i]]++;
    }
    for(int i=m;i<n;i++)
    {
        ans[i]=(ans[i-m]+ans[i-m+1])%mod;
        mark[ans[i]]++;
    }
    int in=0;
    for(int i=0;i<mod;i++)
    {
        while(mark[i])
        {
            mark[i]--;
            ans[in++]=i;
        }
    }
    for(int i=0;i<q;i++)
    {
        cin>>b;
        cout<<ans[b-1]<<endl;
    }
    return 0;
}
