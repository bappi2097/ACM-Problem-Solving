#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
void main()
{
    std::vector<int> my_vec;
    my_vec.push_back(10);
    my_vec.push_back(20);
    my_vec.push_back(30);
    my_vec.push_back(40);

    cout<<"vector size = "<<my_vec.size()<<endl;

    for(int i=0;i<my_vec.size();i++)
        cout<<"vector "<<i<<" "<<my_vec.at(i)<<endl;

    ///my_vec.erase(my_vec.begin()+3);

    ///my_vec.erase(std::remove(my_vec.begin(),my_vec.end(),30),my_vec.end());
    my_vec.clear();
    cout<<endl<<endl;

    cout<<"is vector empty = "<<my_vec.empty()<<endl;

    for(int i=0;i<my_vec.size();i++)
        cout<<"vector "<<i<<" "<<my_vec.at(i)<<endl;

}
