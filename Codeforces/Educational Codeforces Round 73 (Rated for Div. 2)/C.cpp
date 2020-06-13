#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
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
    while(t--)
    {
        ll c,m,x,cnt=0,mini=0;
        cin>>c>>m>>x;
        mini=min(c,m);
        cnt=min(mini,x);
        c-=cnt;
        m-=cnt;
        x-=cnt;
        while(c && m && c+m>=3)
        {
            if(c>=m)
            {
                c-=2;
                m--;
                cnt++;
            }
            else
            {
                m-=2;
                c--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
