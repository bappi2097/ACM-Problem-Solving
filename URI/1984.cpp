#include<iostream>
using namespace std;
int main()
{
    long long unsigned a,b;
    cin>>a;
    while(1)
    {
        b=a%10;
        cout<<b;
        if(a/10==0)break;
        a/=10;
    }
    cout<<'\n';
    return 0;
}
