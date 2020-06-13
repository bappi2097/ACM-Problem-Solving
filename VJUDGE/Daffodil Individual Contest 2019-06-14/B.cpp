#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("Input.txt","r",stdin);
    char s[55];
    while(scanf("%s",s)!=EOF)
    {
        int i=0;
        if(s[0]=='h')
        {
            cout<<"http://";
            i=4;
        }
        else
        {
            cout<<"ftp://";
            i=3;
        }
        int len=strlen(s);
        for(int j=i; j<len; j++)
        {
            if(j!=i && s[j]=='r' && s[j+1]=='u')
            {
                cout<<".ru";
                i=j+2;
                break;
            }
            cout<<s[j];
        }
        if(i!=len)
        {
            cout<<'/';
            for(i; i<len; i++)cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
