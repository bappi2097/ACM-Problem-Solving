#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    map<int,bool>m;
    map<int ,bool>::iterator it;
    for(int i=0;i<100;i++)m[i+1]=1;
    int s;
    cin>>s;
    it=m.find(s);
   // for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<endl;
    return 0;
}
