#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
map<ll,ll> mp;
map<ll,ll>::iterator it1,it2,it3;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    char ar[t][t];
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)ar[i][j]='W';
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            for(int k=0;k<t;k++)
            {
                for(int l=0;l<t;l++)
                {
                    if(ar[i][j]=='W' && abs(i-k)==2 && abs(j-l)==1)ar[k][l]='B';
                    if(ar[i][j]=='W' && abs(i-k)==1 && abs(j-l)==2)ar[k][l]='B';
                }
            }
        }
    }

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)cout<<ar[i][j];
        cout<<endl;
    }
    return 0;
}
