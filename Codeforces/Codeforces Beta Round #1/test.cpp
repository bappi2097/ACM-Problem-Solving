#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int col;
    cin>>col;
    string str,c="";
    cin>>str;
    sscanf(str.c_str(),"R%dC%d",&col,&col);
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
    cout<<c<<endl;
    return 0;
}
