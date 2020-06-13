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
    for(it=mylist.begin();it!=mylist.end();it++)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
