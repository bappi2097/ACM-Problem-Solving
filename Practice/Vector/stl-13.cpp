#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int ar[5]={3,9,6,7,4};
    list<int> mylist(&ar[0],&ar[5]);
    list<int>::iterator it;
    if(mylist.empty())cout<<"True"<<endl;
    else cout<<"False"<<endl;
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    mylist.pop_back();
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    mylist.pop_front();
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;
    return 0;
}
