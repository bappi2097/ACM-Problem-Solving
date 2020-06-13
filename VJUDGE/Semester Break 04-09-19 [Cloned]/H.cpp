#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> divisors[500000];
void Divisor(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)divisors[j].push_back(i);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    Divisor(500000);
    ll t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        ll a,sum=0;
        cin>>a;
        for(int j=0;j<divisors[a].size()-1;j++)sum+=divisors[a][j];
        cout<<sum<<endl;
    }
    return 0;
}
