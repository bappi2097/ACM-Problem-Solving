#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll ar[4],mini=0,ar2[3];
    for(int i=0;i<4;i++)cin>>ar[i];
    sort(ar,ar+3);
    ar2[0]=ar[0];
    if(ar[1]-ar[0]<ar[3])
    {
        ar2[1]=ar[1]+ar[3]-(ar[1]-ar[0]);
    }
    else ar2[1]=ar[1];
    if(ar[2]-ar2[1]<ar[3])
    {
        ar2[2]=ar[2]+ar[3]-(ar[2]-ar2[1]);
    }
    else ar2[2]=ar[2];
    for(int i=0;i<3;i++)mini=max(mini,ar2[i]-ar[i]);
    //for(int i=0;i<3;i++)cout<<ar[i]<<"=="<<ar2[i]<<endl;
    cout<<mini<<endl;
    return 0;
}
