#include<bits/stdc++.h>
using namespace std;
int ar[2000],mark[2000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    int n,maxi=0,cnt=0;
    cin>>n;
    bool bl=0;
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(ar[i]==ar[j] && mark[j]!=2)
            {
                mark[i]=2;
                bl=1;
                break;
            }
        }
        if(bl && mark[i]!=2)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j]  && mark[j]!=2)mark[i]=2;
            }
        }
        //if(bl && mark[i]!=2)bl=0;
    }
    for(int i=0;i<n;i++)
    {
        if(mark[i]==2)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
    }
    cout<<maxi<<endl;
    //for(int i=0;i<n;i++)cout<<mark[i];
    return 0;
}
