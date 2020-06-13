#include <iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            long long int n,m,sum=0;
            cin>>n>>m;
            cout<<"Case "<<i<<": ";
            if(n%(2*m)!=0)
            {
                cout<<'0'<<'\n';
            }
            else cout<<(n/2)*m<<'\n';
        }
    }
    return 0;
}
