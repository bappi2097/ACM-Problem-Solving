#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=y;)
    {
        for(int j=1; i<=y && j<=x;j++)
        {
            cout<<i;
            if(j<x)cout<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
