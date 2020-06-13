#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    int ping,x,y,aReached=0,aLost=0,bReached=0,bLost=0;
    cin>>n;
    while(n--)
    {
        cin>>ping>>x>>y;
        if(ping==1)
        {
            aReached+=x;
            aLost+=y;
        }
        else
        {
            bReached+=x;
            bLost+=y;
        }
    }
    if(aReached>=aLost)cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
    if(bReached>=bLost)cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
    return 0;
}
