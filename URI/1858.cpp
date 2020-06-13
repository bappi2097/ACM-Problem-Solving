#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int t[100];
int main()
{
    int n;
    //freopen("testcase.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)scanf("%d",&t[i]);
        int max=t[0],count=1;
        for(int i=0; i<n; i++)
        {
            if(max>t[i])
            {
                max=t[i];
                count=i+1;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}
