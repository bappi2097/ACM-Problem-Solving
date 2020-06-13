#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==180)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
