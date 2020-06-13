#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    for(int i=1;i<=10;i++)s.insert(i);
    for(it=s.begin();it!=s.end();++it)cout<<*it<<' ';
    cout<<endl;
    s.insert(2);
    s.insert(12);
    s.insert(11);
    for(it=s.begin();it!=s.end();++it)cout<<*it<<' ';
    cout<<endl;
    it=s.find(3);
    s.erase(it);
    for(it=s.begin();it!=s.end();++it)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
