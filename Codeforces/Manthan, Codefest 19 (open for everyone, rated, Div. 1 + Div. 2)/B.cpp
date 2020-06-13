#include<bits/stdc++.h>
using namespace std;
int n,ar[2000],l[2000],r[2000],cnt=0,mark[2000],maxi,bl=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mark[ar[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mark[ar[i]]>1)
        {
            if(!bl)
            {
                l[cnt]=i;
                r[cnt]=i;
                mark[ar[i]]--;
                bl=1;
            }
            else
            {
                r[cnt]++;
            }
        }
        else if(mark[ar[i]]==1 && bl)
        {
            cnt++;
            bl=0;
        }
    }
    for(int i=0;i<cnt;i++)maxi=max(maxi,r[i]-l[i]+1);
    cout<<maxi<<endl;
    return 0;
}
