#include<iostream>
#include<iterator>
#include<algorithm>
#include<queue>
#include<list>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(2);
    mylist.push_back(-1);
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
