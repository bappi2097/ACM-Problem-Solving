#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> myVector;

int main()
{
    vector<double> vec;
    double n;
    cin>>n;
    vec.push_back(n);
    for(int i=0;i<99;i++)
    {
        n/=2;
        vec.push_back(n);
    }
    int k=0;
    for(auto i=vec.cbegin();i<vec.cend();i++)
    {
        printf("N[%d] = %.4f\n",k,*i);
        k++;
    }
    return 0;
}
