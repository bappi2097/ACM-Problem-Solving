#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,cnt=0;
        cin>>n;
        for(int j=2;j<=10;j++)if(n%j==0)cnt++;
        cout<<"Case "<<i+1<<": "<<cnt<<endl;
    }
    return 0;
}
