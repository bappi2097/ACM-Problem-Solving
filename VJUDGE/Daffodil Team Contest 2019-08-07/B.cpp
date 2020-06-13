#include<bits/stdc++.h>
using namespace std;
int n;
string str1,str2;
void make_Uppercase()
{
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]>='a' && str1[i]<='z')str1[i]-=32;
    }
    for(int i=0;i<str2.size();i++)
    {
        if(str2[i]>='a' && str2[i]<='z')str2[i]-=32;
    }
}
void make_Arobic()
{
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]=='B')str1[i]='P';
        if(str1[i]=='I')str1[i]='E';
    }
    for(int i=0;i<str2.size();i++)
    {

        if(str2[i]=='B')str2[i]='P';
        if(str2[i]=='I')str2[i]='E';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE

    cin>>n;
    while(n--)
    {
        cin>>str1>>str2;
        make_Uppercase();
        make_Arobic();
        if(str1==str2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        str1.clear();
        str2.clear();
    }
    return 0;
}
