#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,count=0;
    cin>>n;
    for(int i=1;i<=n/2;i++) if(n%i==0)count++;
    cout<<count<<endl;
    return 0;
}
