#include<bits/stdc++.h>
using namespace std;
#define print(v) for(int i:v)cout<<i<<' '
bool func(int x, int y)
{
    return x<y;
}
void vec(void)
{
    vector<int> v;
    vector<int>::iterator it;
    v.push_back(2);
    v.push_back(23);
    v.push_back(42);
    v.push_back(3);
    print(v);
    cout<<endl;
    sort(v.begin(),v.end(),func);
    print(v);
    cout<<endl;
    bool b=binary_search(v.begin(),v.end(),1);
    cout<<b<<endl;
    cout<<*upper_bound(v.begin(),v.end(),23)<<endl;
    cout<<*lower_bound(v.begin(),v.end(),23)<<endl;
    return;
}
void mySet(void)
{
    set<int> s;
    s.insert(10);
    s.insert(13);
    s.insert(11);
    s.insert(11);
    print(s);
    cout<<endl;
    set<int>::iterator it;
    it=s.find(10);
    cout<<*it<<endl;
    cout<<binary_search(s.begin(),s.end(),3);
    cout<<endl;
    s.erase(13);
    print(s);
    cout<<endl;
    s.erase(s.begin(),s.end());
    print(s);
    s.insert(10);
    s.insert(13);
    s.insert(11);
    return;
}
void myMap()
{
    return;
}
void Question()
{
    set<pair<int,int>> s;
    s.insert({401,450});
    s.insert({10,20});
    s.insert({2,3});
    s.insert({30,400});
    auto it=s.begin();
    pair<int,int> p=*it;
    //cout<<p.first<<' '<<p.second<<endl;
    for(auto i =s.begin();i!=s.end();i++)
    {
        p=*i;
        cout<<p.first<<' '<<p.second<<endl;
    }
    it=s.upper_bound({2,INT_MAX});
    it--;
    if(it==s.end())cout<<"not Found"<<endl;
    p=*it;
    cout<<p.first<<' '<<p.second<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    //mySet();
    Question();
    return 0;
}
