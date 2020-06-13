#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int number(double a)
{
    ll count=0;
    count=ceil(a/6);
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        a=a-b;
        cout<<number(a)<<endl;
    }
    return 0;
}
