#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void recurse(int count,int n)
{
    if(count>=2)
        recurse(count-1,n);
    printf("%d\n",count);
}
int main()
{
    recurse(10,10);
    return 0;
}
