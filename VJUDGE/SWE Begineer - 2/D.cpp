#include<iostream>
using namespace std;
long long int aVeryBigSum(long long int ar[],int n)
{
    long long int sum=0;
    for(int i=0;i<n;i++)sum+=ar[i];
    return sum;
}
int main()
{
    int n;
    while(cin>>n)
    {
        long long int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        cout<<aVeryBigSum(ar,n)<<'\n';
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int ar[n],sum=0;
    int i=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&ar[i]);
        sum+=ar[i];
    }
    printf("%lld\n",sum);
    return 0;
}
*/
