#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double v,d,pi=3.14,h,r,a;
    while(cin>>v>>d)
    {
        r=d/2;
        a=pi*r*r;
        h=v/a;
        printf("ALTURA = %.2f\n",h);
        printf("AREA = %.2f\n",a);
    }
    return 0;
}
