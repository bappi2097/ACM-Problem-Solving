#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    int n,c,mini=105,maxi=-100,in=0;
    cin>>n>>c;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=1;i<n;i++)
    {
        maxi=max(ar[i-1]-ar[i]-c,maxi);
    }
    cout<<(maxi<=0 ? 0 : maxi)<<endl;
    return 0;
}
