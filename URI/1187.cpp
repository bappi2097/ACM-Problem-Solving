#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    double ar[12][12],sum=0;
    char ch;
    cin>>ch;
    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)cin>>ar[i][j];
    for(int i=0; i<6; i++)
    {
        for(int j=1+i; j<6; j++)
        {
            sum+=ar[i][j];
            count++;
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=6; j<11-i; j++)
        {
            sum+=ar[i][j];
            count++;
        }

    }
    if(ch=='S')printf("%.1f\n",sum);
    else if(ch=='M')printf("%.1f\n",(double)sum/count);
    return 0;
}
