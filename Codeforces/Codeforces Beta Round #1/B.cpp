#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void colToString(string str)
{
    ll row=0,col=0,i=0;
    string c="";
    sscanf(str.c_str(),"R%dC%d",&row,&col);
    while(col)
    {
        if(col%26==0)
        {
            c+='Z';
            col-=26;
        }
        else c+='A'+col%26-1;
        col/=26;
    }
    reverse(c.begin(),c.end());
    cout<<c<<row<<endl;
    return;
}
void stringToCol(string str)
{
    ll col=0,i=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            col*=26;
            col+=str[i]-'A'+1;
        }
        else break;
    }
    cout<<'R';
    for(i;i<str.size();i++)cout<<str[i];
    cout<<'C'<<col<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    for(ll k=0; k<t; k++)
    {
        string str;
        cin>>str;
        bool bl=false;
        if(str[0]=='R' && str[1]>='0' && str[1]<='9')
        {
            for(ll i=2;i<str.size();i++)
            {
                if(str[i]=='C')
                {
                    bl=true;
                    break;
                }
            }
        }
        if(bl)colToString(str);
        else stringToCol(str);
    }
    return 0;
}
