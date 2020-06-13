#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int sum=a+b+c;
        if(sum>24)cout<<sum-24<<'\n';
        else if(sum<0)cout<<sum+24<<'\n';
        else cout<<sum<<'\n';
    }
    return 0;
}
