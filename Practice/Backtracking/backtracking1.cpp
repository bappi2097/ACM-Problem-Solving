#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
void print(void)
{
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
void subset(ll a[],ll n,ll i)
{
    if(i==n)
    {
        print();
        return ;
    }
    v.push_back(a[i]);
    subset(a,n,i+1);
    v.pop_back();
    subset(a,n,i+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    ll arr[3]={1,2,3};
    subset(arr,3,0);
    return 0;
}
