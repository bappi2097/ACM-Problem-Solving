#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include <string>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef long long li;

#define ms(x,a)     memset(x,a,sizeof(x))
#define forn(i, n)  for (int i = 0; i < int(n); i++)
#define pi          acos(0.0)*2 // 3.1415926535897932
#define mxx         1000000000
#define mod         10000007
#define pb          push_back

void inOut();
int n,m,d,k,a,b;

const int N = 10000000;
bool B[10000000];
vector<ll>prime;
vector<ll>::iterator it1,it2;

void seive()
{
    for(ll i=3; i*i<=N; i+=2)
    {
        if(!B[i])
            for(ll j=i*i; j<=N; j+=i<<1)
                B[j] = 1;
    }

    for(ll i=3; i<=N; i+=2)
        if(!B[i])
            prime.pb(i);
}

int main()
{
    seive();
    int i,j,q;
    string ch;

    int len = prime.size();

    while(cin>>a>>b && a!=0 && b!=0)
    {
        int cnt = 0;

        if(a%2 == 1)
            a++;
        if(b%2 == 1)
            b--;
        for(i=a; i<=b; i+=2)
        {
            it1=upper_bound(prime.begin(),prime.end(),i);
            int in=distance(prime.begin(),it1);
            //if(in%2==1)in++;
            //cout<<in<<endl;
            for(int j=0; j<in; j++)
            {
                for(int k=in-1; k>=0; k--)
                {
                    //cout<<i<<' '<<prime[j]<<' '<<prime[k]<<endl;
                    if(prime[j]+prime[k]==i && prime[j]!=prime[k])
                    {
                        //cout<<i<<'='<<prime[j]<<'+'<<prime[k]<<endl;
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout<<cnt/2<<endl;
    }

    return 0;
}

