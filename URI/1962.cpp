#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        if(t>=2015)t-=2014;
        else t-=2015;
        if(t>0)cout<<t<<" A.C.\n";
        else cout<<t*-1<<" D.C.\n";
    }
    return 0;
}
