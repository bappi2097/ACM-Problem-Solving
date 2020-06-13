#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    map<string,int>::iterator it;
    m["arnob"]=23;
    m.insert(make_pair("bappi",45));
    for(it=m.begin();it!=m.end();it++)cout<<it->first<<' '<<it->second<<endl;
    return 0;
}
