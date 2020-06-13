#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDG
    int d,sumTime;
    cin>>d>>sumTime;
    int minTime[d],maxTime[d],cntd=0,cnt=sumTime;
    for(int i=0;i<d;i++)cin>>minTime[i]>>maxTime[i];
    for(int i=0;i<d;i++)cnt-=maxTime[i];
    if(cnt>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cnt=sumTime;
    for(int i=0;i<d;i++)cnt-=minTime[i];
    if(cnt<0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    int j=0;
    while(cnt)
    {
        if(minTime[j]<maxTime[j])
        {
            minTime[j]++;
            cnt--;
        }
        j++;
        if(j==d)j=0;
    }
    for(int i=0;i<d;i++)cout<<minTime[i]<<' ';
    cout<<endl;
    return 0;
}
