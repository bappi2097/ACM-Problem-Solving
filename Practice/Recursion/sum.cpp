#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1)return 1;
    else return n+sum(n-1);
    return n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
