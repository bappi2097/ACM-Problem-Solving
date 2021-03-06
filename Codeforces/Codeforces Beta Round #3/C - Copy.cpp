#include<bits/stdc++.h>
using namespace std;
#define FOR(i,x,y)          for(i=x;i<y;i++)
int win(char x,char ch[3][3])
{
    int cnt=0,i;
    FOR(i,0,3)
    {
        if(ch[i][0]==x && ch[i][1]==x && ch[i][2]==x)cnt++;
        if(ch[0][i]==x && ch[1][i]==x && ch[2][i]==x)cnt++;
    }
    if(ch[0][0]==x && ch[1][1]==x && ch[2][2]==x)cnt++;
    if(ch[0][2]==x && ch[1][1]==x && ch[2][0]==x)cnt++;
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    char ch[3][3];
    int cntx=0,cnto=0,i,j,rx=0,ro=0;
    FOR(i,0,3)
    {
        FOR(j,0,3)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='X')cntx++;
            else if(ch[i][j]=='0')cnto++;
        }
    }
    rx=win('X',ch);
    ro=win('0',ch);
    if(cnto>cntx || abs(cnto-cntx)>1 || (rx && ro) || (rx && cntx==cnto) || (ro && cnto<cntx))
        cout<<"illegal"<<endl;
    else if(rx)
        cout<<"the first player won"<<endl;
    else if(ro)
        cout<<"the second player won"<<endl;
    else if(cntx+cnto==9)
        cout<<"draw"<<endl;
    else if(cntx>cnto)
        cout<<"second"<<endl;
    else
        cout<<"first"<<endl;
    return 0;
}
