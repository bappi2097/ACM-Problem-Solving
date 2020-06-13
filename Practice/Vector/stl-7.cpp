//Ascending Order First Three Value
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    for(it=vec.begin();it!=vec.end();it++)cout<<*it<<' ';
    cout<<endl;
    sort(vec.begin(),vec.begin()+3);
    for(it=vec.begin();it!=vec.end();it++)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
