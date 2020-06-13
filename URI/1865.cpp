#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("testcase.txt","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char str[100];
        int f;
        scanf("%s %d",&str,&f);
        if(strcmp(str,"Thor")==0)cout<<"Y\n";
        else cout<<"N\n";
    }
    return 0;
}
