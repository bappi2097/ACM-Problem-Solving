//Ascending Order
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> vec;
    vector<int>::iterator it;
    vec.push_back(10);
    vec.push_back(123);
    vec.push_back(3);
    vec.push_back(15);
    vec.push_back(44);
    vec.push_back(96);
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)cout<<*it<<' ';
    cout<<'\n';
    return 0;
}
