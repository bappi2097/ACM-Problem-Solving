#include <iostream>
using namespace std;
int main()
{
    int k,n;
    cin>>n>>k;
    int a[n],i,count=0;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)if(a[i]>=a[k-1] && a[i]>0)count++;
    cout<<count<<"\n";
    return 0;
}
