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
    string c[8];
    for(int i = 0; i < 8; i++)getline(cin,c[i]);
    int cntR = 0, cntW = 0, cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        cnt = 0;
        if(c[i][0] == 'B')for(int j = 0; j < 8; j++)if(c[i][j] == 'B')cnt++;
        if(cnt == 8)cntR++;
    }
    for(int i = 0; i < 8; i++)
    {
        cnt = 0;
        if(c[0][i] == 'B')for(int j = 0; j < 8; j++)if(c[j][i] == 'B')cnt++;
        if(cnt == 8)cntW++;
    }
    if(cntR == 8)cout<<cntR<<endl;
    else cout<<cntR+cntW<<endl;
    //for(int i = 0; i < 8; i++)cout<<c[i]<<endl;
    return 0;
}
