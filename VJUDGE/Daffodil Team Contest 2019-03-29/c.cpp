#include<iostream>
#include<stdlib.h>
using namespace std;
int r[200000],z=0,a[200000];
int main()
{
    int n,m;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        int k[n];
        for(int i=0; i<n; i++)cin>>k[i];
        cin>>m;
        int d[m],count=0;
        for(int i=0; i<m; i++)cin>>d[i];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                if(k[j]==d[i])
                {
                    count++;
                    continue;
                }
                for(int l=0; l<n; l++)
                    if(k[j]+k[l]==d[i] && !a[i])
                    {
                        a[i]=1;
                        count++;
                        break;
                    }
            }
            r[z]=count;
            z++;
       // cout<<count<<'\n';
    }
    system("CLS");
    for(int i=0;i<z;i++)cout<<r[i]<<'\n';
    return 0;
}
