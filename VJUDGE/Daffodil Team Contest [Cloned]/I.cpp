#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
#endif // ONLINE_JUDGE
    double r,x[3],y[3];
    cin>>r;
    for(int i=0; i<3; i++)
        cin>>x[i]>>y[i];
    long sum=0;
    for(int i=0; i<3; i++)
    {
        for(int j=1,k=10; j<=10; j++,k--)
        {
            if(x[i]>=(r*(j-1)) && x[i]<=(r*j))
            {
                sum+=k;
                break;
            }
            else if(y[i]>=(r*(j-1)) && y[i]<=(r*j))
            {
                sum+=k;
                break;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
