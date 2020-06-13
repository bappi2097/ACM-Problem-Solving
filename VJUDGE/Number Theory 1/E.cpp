#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define maxSz 20000007

struct Pair
{
    int p1;
    int p2;
};

vector<int>prime;
vector<int>::iterator it1,it2,it3;

vector<Pair>primePair;
vector<Pair>::iterator ip1,ip2,ip3;

bool mark[maxSz];

void sieve(int n)
{
    mark[1]=1;
    for(int i=2;i<=n;i+=2)mark[i]=1;
    for(int i=3;i*i<=n;i+=2)if(!mark[i])for(int j=i*i;j<=n;j+=i*2)mark[j]=1;
    for(int i=3;i<=n;i+=2)if(!mark[i])prime.push_back(i);
    int sz=prime.size();
    for(int i=0;i<sz-1;i++)if(prime[i+1]-prime[i]==2)primePair.push_back({prime[i],prime[i+1]});
    prime.clear();
    return;
}

int main()
{
    sieve(maxSz);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int n;
    while(cin>>n)
    {
        cout<<'('<<primePair[n-1].p1<<", "<<primePair[n-1].p2<<')'<<endl;
    }
    return 0;
}
