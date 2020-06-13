#include<bits/stdc++.h>
using namespace std;
void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
}
int main()
{
    inOut();
    double n,sum=0;
    cin>>n;
    for(int i=n;i!=0;i--)sum+=i/n;
    cout<<sum<<endl;
    return 0;
}
