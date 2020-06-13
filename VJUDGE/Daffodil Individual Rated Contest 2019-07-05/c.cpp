#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,x;
    cin>>s>>x;
    int i=1;
    for(i=1;1;i++)
    {
        if(s/x==0)break;
        s/=x;
    }
    cout<<i<<endl;
    return 0;
}
