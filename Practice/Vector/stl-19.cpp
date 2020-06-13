#include<iostream>
#include<iterator>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    vector<pair<int,bool>>v;
    vector<pair<int,bool>>::iterator it;
    for(int i=1;i<=10;i++)v.push_back(make_pair(i,1));
    for(it=v.begin();it!=v.end();++it)cout<<it->first<<' '<<it->second<<endl;
    return 0;
}
