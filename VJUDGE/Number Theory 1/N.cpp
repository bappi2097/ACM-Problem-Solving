#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int num;
    int cnt=0;
};
vector<Node>divisors(1000);
bool myfunc(Node x,Node y)
{
    if(x.cnt<y.cnt)return true;
    else if(x.cnt==y.cnt )return x.num>y.num;
    else return false;

}
void Divisor(int n)
{
    for(int i=1;i<=n;i++)divisors[i-1].num=i;
    for(int i=1;i<=n;i++)for(int j=i;j<=n;j+=i)divisors[j-1].cnt++;
    sort(divisors.begin(),divisors.end(),myfunc);
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
    Divisor(1000);
    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<l<<": "<<divisors[n-1].num<<endl;//<<' '<<divisors[n-1].cnt<<endl;
    }
    return 0;
}
