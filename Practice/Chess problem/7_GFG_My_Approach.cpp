#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countNoBishopAttack(int n)
{
    if(n<1)return 0;
    else if(n==1)return 1;
    else return 2*(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",countNoBishopAttack(n));
    return 0;
}
