#include<iostream>
using namespace std;
int main()
{
    int p,n,a,b;
    bool t=0;
    cin>>p>>n>>a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        if((b-a)>p || (b-a)<-1*p)t=1;
        a=b;
    }
    if(t)cout<<"GAME OVER\n";
    else cout<<"YOU WIN\n";
    return 0;
}
