#include<bits/stdc++.h>
using namespace std;
long long Pow(long long int n,long long int x)
{
    if(x<=1)return n*x;
    else if(x%2==0)
    {
        long long int y=Pow(n,x/2);
        return y*y;
    }
    else return n*Pow(n,x-1);
}
int main()
{
    long long int n,x;
    scanf("%lld %lld",&n,&x);
    printf("%lld\n",Pow(n,x));
    return 0;
}
