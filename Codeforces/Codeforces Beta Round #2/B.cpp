#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif // ONLINE_JUDGE
    ll n;
    string str="";
    cin>>n;
    ll ar[n][n],jn=0,cnt=0,mul=1;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)cin>>ar[i][j];
    if(ar[0][0]%5==0)cnt=1;
    for(int i=1; i<n; i++)
    {
        if(ar[i][jn]%5==0 && jn<n-1)
        {
            while(jn<n-1)
            {
                if(ar[i-1][jn+1]%5==0)
                {
                    mul*=ar[i][jn];
                    if(mul%10==0)
                    {
                        cnt++;
                        mul/=10;
                        mul%=10;
                    }
                    else mul%=10;
                    str+="D";
                    break;
                }
                else if(ar[i][jn+1]%5==0)
                {
                    mul*=ar[i-1][jn+1];
                    if(mul%10==0)
                    {
                        cnt++;
                        mul/=10;
                        mul%=10;
                    }
                    else mul%=10;
                    str+="R";
                    jn++;
                }
                else
                {
                    mul*=ar[i-1][jn+1];
                    if(mul%10==0)
                    {
                        cnt++;
                        mul/=10;
                        mul%=10;
                    }
                    else mul%=10;
                    mul*=ar[i][jn+1];
                    if(mul%10==0)
                    {
                        cnt++;
                        mul/=10;
                        mul%=10;
                    }
                    else mul%=10;
                    str+="RD";
                    jn++;
                    break;
                }
            }
        }
        else
        {
            mul*=ar[i][jn];
            if(mul%10==0)
            {
                cnt++;
                mul/=10;
                mul%=10;
            }
            else mul%=10;
            str+="D";
        }
    }
    for(jn+=1; jn<n; jn++)
    {
        mul*=ar[n-1][jn];
        if(mul%10==0)
        {
            cnt++;
            mul/=10;
            mul%=10;
        }
        else mul%=10;
        str+="R";
    }
    cout<<cnt<<endl;
    cout<<str<<endl;
    return 0;
}
