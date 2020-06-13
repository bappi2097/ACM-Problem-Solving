#include<iostream>
using namespace std;
int main()
{
    long long int k,w,n,i,p=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)p+=i*k;
    int d=p-n;
    if(p>n)cout<<d<<"\n";
    else cout<<"0\n";
    return 0;
}
