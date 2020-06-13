#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a*b*c)<=(20*20*20) && a<=20 && b<=20 &&c <=20)cout<<"Case "<<i<<": good\n";
        else cout<<"Case "<<i<<": bad\n";
    }
    return 0;
}
