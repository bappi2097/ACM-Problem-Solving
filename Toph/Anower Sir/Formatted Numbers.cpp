#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
char ch[18],rs[18];
long long int n;
int i,j=0,k=1;
int main()
{
    scanf("%lld",&n);
    if(n==0)
    {
        cout<<n;
        return 0;
    }
    for(i=0;n!=0;i++)
    {
        ch[i]='0'+n%10;
        n/=10;
    }
    for(i=strlen(ch)-1;i>=0;i--)
    {
        rs[j]=ch[i];
        j++;
    }
    j=strlen(rs)/3;
    if(strlen(rs)%3==0)j--;
    for(i=strlen(rs)-1;i>=0;i--)
    {
        ch[i+j]=rs[i];
        if(k%3==0)
        {
            j--;
            ch[i+j]=',';
        }
        k++;
    }
    cout<<ch<<endl;
    return 0;
}
