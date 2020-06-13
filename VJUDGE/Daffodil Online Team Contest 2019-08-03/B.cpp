#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n,greater<int>());
    unsigned long long mul=1,sum=1;
    for(int i=0;i<n;i++)
    {
        mul*=ar[i];
        sum+=mul;
    }
    cout<<sum<<endl;
    return 0;
}
