#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    while(cin>>n)
    {
        sum=n;
        while(n>=3)
        {
            sum+=n/3;
            n=n/3+n%3;
        }
        if(n==2)sum+=1;
        cout<<sum<<'\n';
    }
    return 0;
}
//Easy Way To Solve
/**
#include<stdio.h>
int main()
{
    long int cola,half,total;
    while(scanf("%ld",&cola)==1)
    {
    half=cola/2;
    total=cola+half;
    printf("%ld\n",total);
    }
}
*/
