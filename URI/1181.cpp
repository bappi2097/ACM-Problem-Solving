#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ar[12][12],sum=0;
    char ch;
    cin>>n>>ch;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)cin>>ar[i][j];
    for(int i=0;i<12;i++)sum+=ar[n][i];
    if(ch=='S')cout<<sum<<endl;
    else if(ch=='M')printf("%.1f\n",(double)sum/12);
    return 0;
}
