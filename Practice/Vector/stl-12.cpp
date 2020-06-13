#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    int ar[5]={2,3,6,5,1};
    list<int> mylist(ar,ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),6);
    mylist.insert(it,4); //4 will be add
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),6);
    mylist.erase(it);//6 will be remove
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
