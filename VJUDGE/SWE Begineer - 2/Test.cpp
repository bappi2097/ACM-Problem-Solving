#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5],sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar,ar+5);
    for(int i=0;i<5;i++)cout<<ar[i]<<' ';
    return 0;
}
