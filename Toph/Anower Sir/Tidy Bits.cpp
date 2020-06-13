#include<iostream>
using namespace std;
int main()
{
    int a,count=0,mul=1,sum=0;
    cin>>a;
    while(a!=0)
    {
        if(a%2==1)count++;
        a/=2;
    }
    for(int i=1;i<=count;i++)
    {
        sum+=mul;
        mul*=2;
    }
    cout<<sum<<endl;
    return 0;
}
