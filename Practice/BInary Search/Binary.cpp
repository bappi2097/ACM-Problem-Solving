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
    ll n;
    cin>>n;
    double low=0,high=n,mid=0;
    while(high-low>.00000001)
    {
        mid=(low+high)/2;
        if(mid*mid>n)high=mid;
        else if(mid*mid<n)low=mid;
        else break;
    }
    ///we can run it for 't' time
    /*while(t--)
    {
        mid=(low+high)/2;
        if(mid*mid>n)high=mid;
        else if(mid*mid<n)low=mid;
        else break;
    }*/
    cout<<mid<<endl;
    cout<<(double)sqrt(n)<<endl;
    return 0;
}
