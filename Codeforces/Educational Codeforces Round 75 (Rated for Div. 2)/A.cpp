#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    //freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.size();
        if(len==1)
        {
            cout<<str<<endl;
            continue;
        }
        int ar[26];
        for(int i=0;i<26;i++)ar[i]=0;
        for(int i=1;i<len;i++)
        {
            int in=str[i]-'a';
            if(str[i]==str[i-1])
            {
                if(ar[in]!=1)ar[in]=2;
            }
            else
            {
                if(ar[in]==0)ar[in]=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(ar[i]==1)cout<<(char)('a'+i);
        }
        cout<<endl;
    }
    return 0;
}
