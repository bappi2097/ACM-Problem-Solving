#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int a;
        for(int i=0; i<t; i++)
        {
            cin>>a;
            cout<<(int)sqrt(a)<<'\n';
        }
    }
    return 0;
}
