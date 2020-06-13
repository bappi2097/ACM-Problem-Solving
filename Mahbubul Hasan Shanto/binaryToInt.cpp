#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    long long int sum=0;
    scanf("%s",s);
    for(int i=strlen(s)-1,j=0;i>=0;i--,j++)sum+=(int)(s[i]-'0')*pow(2,j);
    cout<<sum<<endl;
    return 0;
}
