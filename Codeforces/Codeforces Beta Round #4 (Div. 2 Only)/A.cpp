#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    if(n%2==0 && n!=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
