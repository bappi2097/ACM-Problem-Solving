#include<iostream>
#include<vector>
#include<utility>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,bool>> v;
    int a;
    bool b;
    cin>>a>>b;
    v.push_back(make_pair(a,b));
    cout<<v[0].first<<' '<<v[0].second;
    return 0;
}
