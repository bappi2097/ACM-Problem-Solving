#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    mylist.push_back(2);
    mylist.push_back(5);
    mylist.push_back(3);
    mylist.push_back(7);
    mylist.push_back(1);
    //For Ascending Order
    mylist.sort();
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    mylist.reverse();
    //For Descending order
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    mylist.clear(); // By using this function this list will be empty
    cout<<mylist.size();
    return 0;
}
