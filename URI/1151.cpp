#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1;
    cin>>n;
    if(n==1)cout<<0;
    else if(n==2)cout<<0<<" "<<1;
    else cout<<0<<" "<<1<<" ";
    for(int i=3;i<=n;i++)
    {
        a+=b;
        cout<<a;
        b+=a;
        a=b-a;
        b-=a;
        if(i!=n)cout<<" ";
    }
    cout<<endl;
    return 0;
}
