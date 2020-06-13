#include<bits/stdc++.h>
using namespace std;
#define mx 1000005;
#define ll long long int

bitset<mx> isprime;
vector <int>prime;

///sieve

void sieve()
{
    isprime[0]=isprime[1]=1;
    prime.push_back(2);

    for(int i = 3;i*i<mx;i+=2)
    {
        if(!isprime[i])
            for(int j=i*i;j<mx;j+=i)isprime[j]=1;
    }
    for(int i=3;i<mx;i+=2)if(!isprime[i])prime.push_back(i);
}

int ipow(int base,int pow)
{
    int res=1;
    while(pow--)res*=base;
    return res;
}

int sum_of_divisor(int n)
{
    int ans=1,cnt;
    for(int i=0;prime[i]*prime[i]<=n && i<prime.size();i++)
    {
        if(n%prime[i]==0)
        {
            cnt=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
            ans*=((ipow(prime[i],(cnt+1))-1)/(prime[i]-1));
        }
    }
    if(n!=1)ans*=((n*n)/(n-1));

    return ans;
}
