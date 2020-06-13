#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
//    freopen("testcase.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)cout<<ch[i];
        cout<<'\n';
    }
    return 0;
}
