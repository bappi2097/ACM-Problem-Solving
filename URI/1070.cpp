#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)for(int i=n+1;i<n+12;i+=2)cout<<i<<endl;
    else for(int i=n;i<n+11;i+=2)cout<<i<<endl;
    return 0;
}
