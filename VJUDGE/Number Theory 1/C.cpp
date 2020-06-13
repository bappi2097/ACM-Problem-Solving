#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxSz 1000006
int mark[maxSz];
bool reversePrime(int n)
{
    int r=0,w=n;
    for(int i=0;n>0;i++)
    {
        r=(n%10+r*10);
        n/=10;
    }
    if(!mark[r] && w!=r)return true;
    return false;
}
void sieve(int n)
{
    mark[1]=1;
    mark[2]=0;
    for(int i=4;i<=n;i+=2)mark[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i;j<=n;j+=i*2)
            {
                mark[j]=1;
            }
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    sieve(1000000);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(!mark[n])
        {
            if(reversePrime(n))cout<<n<<" is emirp."<<endl;
            else cout<<n<<" is prime."<<endl;
        }
        else cout<<n<<" is not prime."<<endl;
    }
    return 0;
}
