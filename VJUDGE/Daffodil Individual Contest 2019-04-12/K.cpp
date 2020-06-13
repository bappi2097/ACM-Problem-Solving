#include<iostream>
#define ll long long
using namespace std;
int dToB(int a)
{
    int count=0;
    while(a!=0)
    {
        if(a%2==1)count++;
        a/=2;
    }
    return count;
}
int main()
{
    ll  t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)a[i]=dToB(a[i]);
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
            if(i<n-1)cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
