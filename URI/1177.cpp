#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a;
    int n;
    cin>>n;
    for(int i=0;i<1000;)
    {
        for(int j=0;j<n && i<1000;j++)
        {
            a.push_back(j);
            i++;
        }
    }
    int k=0;
    for(auto i=a.cbegin();i<a.cend();i++)
    {
        cout<<"N["<<k<<"] = "<<*i<<endl;
        k++;
    }
    return 0;
}
