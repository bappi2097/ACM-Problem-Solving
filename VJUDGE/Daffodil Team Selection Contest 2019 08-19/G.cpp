#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
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
    ull m,ar[3];
    cin>>m>>ar[0]>>ar[1]>>ar[2];
    ull n=0;
    for(int i=0;i<3;i++)
    {
        if(ar[i]<m && i<2)
        {
            ar[i+1]+=ar[i]%m;
            continue;
        }
        else if(i<2)
        {
            n+=ar[i]/m;
            if(ar[i]%m!=0 && i<2)ar[i+1]+=ar[i]%m;
            else if(ar[i]%m!=0 && i==2)n++;
        }
        else
        {
            if(ar[i]>=m)n+=ar[i]/m;
            if(ar[i]%m!=0)n++;
        }
    }
    if(n%2==1)cout<<"Tomaz"<<endl;
    else cout<<"Danftito"<<endl;
    return 0;
}
