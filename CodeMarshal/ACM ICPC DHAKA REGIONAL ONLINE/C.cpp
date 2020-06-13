#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
map<ull,bool>mp;
map<ull,bool>::iterator it;
vector<ull> result2;
vector<ull>::iterator it1,it2,it3,it4;
void sqrDouble()
{
    mp[1]=true;
    mp[2]=true;
    for(ull i=2;i<=31623;i++)
    {
        if(!mp[i*i])
        {
            for(ull j=i*i;sqrt(j)<=1000000000 && !mp[j];j*=j)
            {
                mp[j]=true;
                if(!mp[j*2])mp[j*2]=true;
            }
        }
    }
    it=mp.begin();
    it++;
    for(it;it!=mp.end();it++)result2.push_back(it->first);
    sort(result2.begin(),result2.end());
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    sqrDouble();
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ull l,r,x,y;
        cin>>l>>r;
        it1=upper_bound(result2.begin(),result2.end(),l);
        it2=lower_bound(result2.begin(),result2.end(),l);
        long long a=(it1 - result2.begin())+1;
        long long b=(it2 - result2.begin())+1;
        if(a != b)
            x = b;
        else x=a;

        it3=upper_bound(result2.begin(),result2.end(),r);
        it4=lower_bound(result2.begin(),result2.end(),r);
        long long c = (it3 - result2.begin())+1;
        long long d = (it4 - result2.begin())+1;
        if(c != d)
            y=c;
        else y=d;
        int ans=y-x;
        cout<<"Case "<<i+1 <<": "<<ans<<endl;
    }
    return 0;
}
