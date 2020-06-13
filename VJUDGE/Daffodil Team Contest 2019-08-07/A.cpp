#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int t,n,r,ar[102];
    cin>>t;
    while(t--)
    {
        int sum=1500;
        cin>>n>>r;
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)sum+=ar[i];
        if(r==sum)cout<<"Correct"<<endl;
        else cout<<"Bug"<<endl;
    }
    return 0;
}
