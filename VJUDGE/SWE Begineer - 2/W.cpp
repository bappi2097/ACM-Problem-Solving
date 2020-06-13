#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=0;i<t;i++)
        {
            long long int a,r=0;
            cin>>a;
            while(a!=0)
            {
                r=((a%10)+(r*10));
                a/=10;
            }
            cout<<r<<'\n';
        }
    }

    return 0;
}
