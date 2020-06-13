#include<iostream>
using namespace std;
int main()
{
    long long int a[5],sum[5],max=0,min=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    sum[0]=a[1]+a[2]+a[3]+a[4];
    sum[1]=a[0]+a[2]+a[3]+a[4];
    sum[2]=a[0]+a[1]+a[3]+a[4];
    sum[3]=a[0]+a[1]+a[2]+a[4];
    sum[4]=a[0]+a[1]+a[2]+a[3];
    max=sum[0];min=sum[0];
    for(int i=0;i<5;i++)
    {
        if(sum[i]>max)max=sum[i];
        else if(sum[i]<min)min=sum[i];
    }
    cout<<min<<' '<<max<<'\n';
    return 0;
}
