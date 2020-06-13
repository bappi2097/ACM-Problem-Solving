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
    vector<pair<string , int>> s;
    int t;cin>>t;map<string,pair<int,int>> mp;int maxT=numeric_limits<int>::min(),cnt=0,mini=numeric_limits<int>::max();string str;int scr;
    for(int k=0;k<t;k++)
    {
        cin>>str>>scr;
        cnt++;
        mp[str].first+=scr;
        mp[str].second=cnt;
        s.push_back(make_pair(str,mp[str].first));
    }
    cnt=0;
    int minj=numeric_limits<int>::min();
    for(auto i=mp.begin();i!=mp.end( );i++)if(i->second.first>minj)minj=i->second.first;
    for(auto i=mp.begin();i!=mp.end( );i++)if(i->second.first==minj)cnt++;
    if(cnt==1)
    {
        for(auto i=mp.begin();i!=mp.end();i++)if(i->second.first==minj)cout<<i->first<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i].second>=minj && mp[s[i].first].first==minj)
        {
            cout<<s[i].first<<endl;
            return 0;
        }
    }
    return 0;
}
