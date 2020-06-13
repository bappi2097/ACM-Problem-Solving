#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    int index = distance(v.begin(),min_element(v.begin(),v.end()));
    cout<<"Menor valor: "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Posicao: "<<index<<endl;
    return 0;
}

