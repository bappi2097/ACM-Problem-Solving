#include<iostream>
#include<cstring>
using namespace std;
char s[5];
int i=0,a=0,b=0,c=0,d=0,f=0;
void check()
{
    if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])f=1;
}
int main()
{
    cin>>s;
    a=s[3]-'0';
    b=s[2]-'0';
    c=s[1]-'0';
    d=s[0]-'0';
    while(1)
    {
        if(a<9)
        {
            s[3]+=1;
            a++;
        }
        else if(b<9)
        {
            s[2]+=1;
            b++;
            a=0;
            s[3]='0';
        }
        else if(c<9)
        {
            s[1]+=1;
            c++;
            a=0;
            b=0;
            s[3]='0';
            s[2]='0';

        }
        else if(d<9)
        {
            s[0]+=1;
            d++;
            a=0;
            b=0;
            c=0;
            s[3]='0';
            s[2]='0';
            s[1]='0';
        }
        check();
        if(f)
        {
            cout<<s<<'\n';
            break;
        }
    }
    return 0;
}
