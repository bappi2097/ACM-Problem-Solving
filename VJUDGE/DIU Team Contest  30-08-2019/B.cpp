#include<bits/stdc++.h>
using namespace std;
string rev(string str)
{
    string str2="";
    for(int i=str.size()-1;i>=0;i--)str2+=str[i];
    return str2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    string s;
    cin>>s;
    int sz=s.size();
    string s2=rev(s);
    if(s==s2)
    {
        cout<<s<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=0;i<sz;i++)
    {
        if(s[i]==s2[cnt])cnt++;
        else
        {
            if(cnt)i--;
            cnt=0;
        }
    }
    cout<<s;
    for(int i=cnt;i<sz;i++)cout<<s2[i];
    cout<<endl;
    return 0;
}
