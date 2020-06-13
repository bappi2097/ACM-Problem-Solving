#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
vector<int> divisors[1000002];
void Divisors(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)divisors[j].push_back(i);
    }
}
int main()
{
    Divisors(100);
    cout<<divisors<<'\n';
    return 0;
}
