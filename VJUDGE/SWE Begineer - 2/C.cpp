#include<iostream>
using namespace std;
int simpleArraySum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)sum+=a[i];
    return sum;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<simpleArraySum(a,n)<<'\n';
    }
    return 0;
}
