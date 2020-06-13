#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        int r,p=0,q=0,x=n,a[n][n],z=1;
        if(n%2==0)r=n/2;
        else r=(n/2)+1;
        for(int i=0; i<r; i++)
        {
            for(int j=p; j<x; j++)for(int k=q; k<x; k++)a[j][k]=z;
            x--;
            p++;
            q++;
            z++;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)printf("%3d",a[i][j]);
                else printf(" %3d",a[i][j]);
            }
            cout<<'\n';
        }
        cout<<endl;
    }
    return 0;
}
