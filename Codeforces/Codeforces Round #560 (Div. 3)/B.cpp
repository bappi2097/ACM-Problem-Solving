#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int ar[200000];
    for(int i=0; i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<ceil((double)sum/n)<<endl;
    return 0;
}
