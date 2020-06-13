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
    ll a,b,n,t=0;
    while(t++<=10000)
    {
        n=t;
        ll cnt=1;
        while(n!=1)
        {
            if(n%2==1)n=3*n+1;
            else n/=2;
            cnt++;
        }
        cout<<t<<' '<<cnt<<endl;
    }
    return 0;
}
