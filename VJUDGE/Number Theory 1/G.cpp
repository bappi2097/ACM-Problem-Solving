#include<bits/stdc++.h>
using namespace std;
#define maxSz 3007
int mark[3007];
vector<int> prime;
vector<int>divisors[maxSz];
void sieve(int n)
{
    mark[1]=1;
    for(int i=4;i<=n;i+=2)mark[i]=1;
    for(int i=3;i*i<=n;i+=2)if(!mark[i])for(int j=i*i;j<=n;j+=i*2)mark[j]=1;
    for(int i=1;i<=n;i++)if(!mark[i])prime.push_back(i);
    return;
}
void Divisor(int n)
{
    int sz=prime.size();
    for(int i=0; i<sz; i++)
        for(int j=prime[i]; j<=n; j+=prime[i])
            divisors[j].push_back(prime[i]);
    return;
}
int main()
{

    int n,cnt=0;
    cin>>n;
    sieve(n);
    Divisor(n);
    for(int i=1; i<=n; i++)if(divisors[i].size()==2)cnt++;
    cout<<cnt<<endl;
    return 0;
}
