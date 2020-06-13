#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        t=i;
        cout<<t<<" ";
        cout<<t*t<<" ";
        cout<<t*t*t<<endl;
    }
    return 0;
}
