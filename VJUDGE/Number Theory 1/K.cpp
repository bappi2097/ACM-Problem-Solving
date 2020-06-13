#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxSz pow(2,32)-1
ll sum=1;
map<int,bool> mp;
void series()
{
    mp[1]=true;
    for(ll i=1;sum<=maxSz;i++)
    {
        sum+=1+i*2;
        mp[sum]=true;
    }
    return;
}
int main()
{
    series();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    ll t;
    while(cin>>t && t!=0)
    {
        if(mp[t])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
