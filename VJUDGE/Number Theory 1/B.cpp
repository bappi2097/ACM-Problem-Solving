#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> divisors[100005];
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
    Divisor(100000);
    ll t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        ll a,b,k,sum=0,num=0,ansSum=0;
        cin>>a>>b>>k;
        if(a%k!=0)
        {
            a=((a/k)+1)*k;
        }
        for(int i=a;i<=b;i+=k)
        {
            sum=0;
            num+=divisors[i].size();
            for(int j=0;j<divisors[i].size();j++)sum+=divisors[i][j];
            ansSum+=sum;
        }
        cout<<num<<' '<<ansSum<<endl;
    }
    return 0;
}
