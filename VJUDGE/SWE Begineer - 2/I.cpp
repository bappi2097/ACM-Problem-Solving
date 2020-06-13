#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n],sum=0,div=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i]/100;
    }
    div=sum/n;
    printf("%.12lf\n",div*100);
    return 0;
}

