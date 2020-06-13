#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,k,j;
        cin>>n;
        if(n==0)return 0;
        int a[n];
        for(int i=0; i<n; i++)a[i]=i+1;
        for(int i=0; i<n; i++)
        {
            k=i;
            j=0;
            for(k;k>0;k--)
            {
                if(j==0)printf("%3d",a[k]);
                else printf(" %3d",a[k]);
                j++;
            }
            for(k=0; j<n; k++)
            {
                if(j==0)printf("%3d",a[k]);
                else printf(" %3d",a[k]);
                j++;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
