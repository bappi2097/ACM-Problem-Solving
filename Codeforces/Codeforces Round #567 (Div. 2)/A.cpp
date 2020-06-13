#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    cout<<(x/z)+(y/z)+(((x%z)+(y%z))/z)<<' ';
    if(((x%z)+(y%z))/z==1) cout<<(z-max(x%z,y%z))<<endl;
    else cout<< 0 <<endl;
    return 0;
}
