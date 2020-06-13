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
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a)
        cout<<"Equilateral Triangle"<<endl;
    else if(a!=b && b!=c && c!=a)
        cout<<"Bad Triangle"<<endl;
    else
        cout<<"Isosceles Triangle"<<endl;
    return 0;
}
