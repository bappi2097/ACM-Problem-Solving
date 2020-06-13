#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        a+=b;
        b=a-b;
        a-=b;
    }
    while(b!=0)
    {
        if((b%10)+(a%10)>=10)
        {
            cout<<"Yes\n";
            return 0;
        }
        a/=10;
        b/=10;
    }
    cout<<"No\n";
    return 0;
}

