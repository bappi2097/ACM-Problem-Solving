#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum=0;
    int i=0;
    while(1)
    {
        cin>>n;
        if(n<0)break;
        sum+=n;
        i++;
    }
    printf("%.2f\n",sum/i);
    return 0;
}
