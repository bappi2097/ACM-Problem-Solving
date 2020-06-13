#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,count=0;
    char ch[104];
    scanf("%d",&t);
    scanf("%s",&ch);
    for(int j=0; j<t; j++)
    {
        if(ch[j]=='+')count++;
        else if(count!=0 && ch[j]=='-') count--;
    }
    printf("%d\n",count);
    return 0;
}
