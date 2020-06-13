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
    int n,m;
    cin>>n>>m;
    char c,ch[n][m];
    cin>>c;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>ch[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<ch[i][j];
        cout<<endl;
    }
    return 0;
}
