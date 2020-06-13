#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double x;
    char a[115];
    cin>>x;
    sprintf(a,"%LE",x);
    if(a[0]!='-')cout<<'+';
    printf("%.4LE\n",x);
    return 0;
}
