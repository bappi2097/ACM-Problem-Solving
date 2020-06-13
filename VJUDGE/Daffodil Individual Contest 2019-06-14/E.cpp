#include<bits/stdc++.h>
using namespace std;

#define READ()          freopen("input.txt","r",stdin)
int main()
{
    #ifndef ONLINE_JUDGE
    READ();
    #endif // ONLINE_JUDGE
    char s[305];
    while(scanf("%s",s)!=EOF)
    {
        int in=0,out=0,cnt=0,len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='+')
            {
                in++;
                if(out>0)out--;
                else cnt++;
            }
            else
            {
                out++;
                if(in>0)in--;
                else cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
