#include<bits/stdc++.h>
using namespace std;
void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
}
int main()
{
    inOut();
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        int mini=min(i+1+ar[i],n),cnt=0;
        for(int j=i+1;j<mini;j++)
        {
            if(ar[i]>=ar[j])cnt++;
            else break;
        }
        cout<<cnt<<' ';
    }
    cout<<endl;
    return 0;
}
