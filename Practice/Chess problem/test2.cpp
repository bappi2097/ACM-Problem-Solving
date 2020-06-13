#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n <= 1) // base case
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
}
