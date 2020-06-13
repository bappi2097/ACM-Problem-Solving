#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int max=0,n;
        for(int i=0;i<t;i++)
        {
            cin>>n;
            if(n>max)max=n;
        }
        if(max<10)cout<<1<<endl;
        else if(max>=10 && max<20)cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
