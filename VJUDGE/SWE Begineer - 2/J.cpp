#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        cout<<a%b<<'\n';
    }
    return 0;
}
