#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> vec;
    vector<int>::iterator it;
    for(int i=0;i<10;i++)
        vec.push_back(i+1);
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<'\n';
    return 0;
}
