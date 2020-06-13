#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
map<int,bool>mp;
map<int,bool>::iterator it1,it2;
void fib(int limit)
{
    int a=0,b=1,c=0;
    //mp[0]=true;
    mp[1]=true;
    while(c<=limit)
    {
        c=a+b;
        mp[c]=true;
        swap(a,b);
        b=c;
    }
}
int gcd(int a,int b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    //freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    fib(100005);
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(it1=mp.begin();it1->first<=ar[i];it1++)
        {
            int a=it1->first;
            for(it2=mp.begin();it2->first<=ar[i];it2++)
            {
                int b=it2->first;
                if(b!=0 && (a+b)%2==1)
                {
                    if(mp[a+b])
                    {
                        if(gcd(a,b)==1)
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
