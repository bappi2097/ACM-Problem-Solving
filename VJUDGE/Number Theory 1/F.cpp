#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

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
    while(t--)
    {
        ll n;
        bool bl=true;
        cin>>n;
        if(sqrt(n)==(ll)sqrt(n))
        {
            cout<<"Yes"<<endl;
            bl=false;
        }
        else
        {
            ll a=sqrt(n),b=sqrt(n);
            while(a)
            {
                if(sqrt(n-a*a)==(ll)sqrt(n-a*a))
                {
                    cout<<"Yes"<<endl;
                    bl=false;
                    break;
                }
                a--;
            }
        }
        if(bl)cout<<"No"<<endl;
    }
    return 0;
}
