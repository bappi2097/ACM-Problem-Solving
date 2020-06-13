#include<bits/stdc++.h>
using namespace std;

#define pi          acos(-1)

int ar[10000],n,f,t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        for(int i=0;i<n;i++)cin>>ar[i];
        long long int sum=0;
        for(int i=0;i<n;i++)sum+=(2*pi*((ar[i]*ar[i])+ar[i]));
        cout<<sum<<endl;
    }
    return 0;
}
