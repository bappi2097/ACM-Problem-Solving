#include<bits/stdc++.h>
using namespace std;
long long int countc=0;
long long int fib(long long int n)
{
    countc++;
    if(n<=1)return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    long long int n=40;
    scanf("%d",&n);
    printf("%lld\t%lld\n",fib(n),countc);

    return 0;
}
