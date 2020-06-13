#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
map<ull,bool>mp;
map<ull,bool>::iterator it;
vector<ull> vec;
int main()
{
    freopen("input.cpp","w",stdout);
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
    for(it=mp.begin();it!=mp.end();it++)cout<<it->first<<endl;/*vec.push_back(it->first);
    mp.clear();
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)cout<<vec[i]<<endl;*/
    return 0;
}
