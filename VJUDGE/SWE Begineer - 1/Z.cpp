#include<bits/stdc++.h>
#include <inttypes.h>

using namespace std;

#define ll  long long
#define mx 4294967296

vector<pair<ll, ll> >vc;
int x1[5] = {0,0,-1,1};
int y11[5] = {1,-1,0,0};
ll arr[100][100];

int main()
{
    ll n,m,a,t,i,j=0,ck=0,x=1;

    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(arr, 0, sizeof(arr));
        ck =0;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin>>arr[i][j];
                if(arr[i][j]>0) ck++;
            }
        }

        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                ll xx = arr[i][j];
                for(ll x=0; x<4; x++){
                    ll yy = arr[i+x1[x]][j+y11[x]];
                    if(xx > yy) ck+= xx-yy;
                }
            }
        }

        cout<<ck<<endl;
    }

}
