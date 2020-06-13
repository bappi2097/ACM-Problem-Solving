#include<iostream>
using namespace std;
int main()
{
    long long int n;
    char s[10000],t;
    while(cin>>s>>t>>n)
    {
        if(t=='/')
        {
            int f=0;
            long long int div=0;
            for(int i=0; s[i]!='\0'; i++)
            {
                div=s[i]-'0'+div*10;
                if(div/n!=0)f=1;
                if(f)cout<<div/n;
                div%=n;
            }
            if(!f)cout<<"0";
        }
        else if(t=='%')
        {
            long long int rem=0;
            for(int i=0; s[i]!='\0'; i++)
            {
                rem=s[i]-'0'+rem*10;
                rem%=n;
            }
            cout<<rem;
        }

        cout<<"\n";
    }
    return 0;
}
/*
0 / 2147483647 = 0
0 % 2147483647 = 0
2147483646 % 2147483647 = 2147483646
99999999999999999999 / 2147483647 = 46566128752
*/
