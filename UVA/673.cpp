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
    int t;
	scanf("%d", &t);
    getc(stdin);
    while(t--)
    {
        char str[150];
        stack<char> stk;
        gets(str);
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
            if(str[i]=='(' || str[i]=='[')stk.push(str[i]);
            else if(str[i]==')')
            {
                if(stk.empty() || stk.top()!='(')
                {
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
            else if(str[i]==']')
            {
                if(stk.empty() || stk.top()!='[')
                {
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
        }
        if(stk.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
