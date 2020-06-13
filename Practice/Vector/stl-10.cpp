#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    list<int> mylist(4,0);
    for(list<int>::iterator i=mylist.begin();i!=mylist.end();i++)cout<<*i<<' ';
    return 0;
}
