#include<iostream>
using namespace std;
int main()
{
    int n,com=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        count++;
        if(a[i]!=a[i+1])com++;
        if(com>1)break;
    }
    cout<<count<<'\n';
    return 0;
}
