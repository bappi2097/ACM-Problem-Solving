#include<iostream>
using namespace std;
int main()
{
    int n,mul=1;
    cin>>n;
    for(int i=1;i<=n;i++)mul*=i;
    cout<<mul<<endl;
    return 0;
}
