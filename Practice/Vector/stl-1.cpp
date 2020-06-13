#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <long long int> a;
    long long int in,size;
    cin>>size;;
    for(int i=0;i<size;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<a.size();i++)cout<<a[i]<<'\n';
    return 0;
}
