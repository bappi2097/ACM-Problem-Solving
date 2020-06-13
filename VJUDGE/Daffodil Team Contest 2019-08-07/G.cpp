#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    while(n--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int bl=0;

        for(int i=0;i<str1.size()-3;i++)
        {
            if(str1[i]==str2[0] && str1[i+1]==str2[1] && str1[i+2]==str2[2] && str1[i+3]==str2[3])bl=1;
        }
        for(int i=0;!bl && i<str1.size()-2;i++)
        {
            if(str1[i]==str2[1] && str1[i+1]==str2[2] && str1[i+2]==str2[3])bl=2;
        }
        for(int i=0;!bl &&  i<str1.size()-2;i++)
        {
            if(str1[i]==str2[0] && str1[i+1]==str2[1] && str1[i+2]==str2[2])bl=2;
        }
        for(int i=0;!bl &&  i<str1.size()-2;i++)
        {
            if(str1[i]==str2[0] && str1[i+1]==str2[2] && str1[i+2]==str2[3])bl=2;
        }
        for(int i=0; !bl &&  i<str1.size()-2;i++)
        {
            if(str1[i]==str2[0] && str1[i+1]==str2[1] && str1[i+2]==str2[3])bl=2;
        }
        if(bl==1)cout<<"good"<<endl;
        else if(bl==2)cout<<"almost good"<<endl;
        else cout<<"none"<<endl;
        str1.clear();
        str2.clear();
    }
    return 0;
}
