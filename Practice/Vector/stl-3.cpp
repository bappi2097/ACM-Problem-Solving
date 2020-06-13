#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> vec;
    vector<int>::iterator it;
    for(int i=1;i<=5;i++)vec.push_back(i);
    for(int i=0;i<5;i++)cout<<vec[i]<<'\t';
    it=vec.begin();
    cout<<'\n';
    cout<<*it;
    return 0;
}
