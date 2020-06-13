#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    else if(a%b==0) return b;
    return gcd(b,a%b);
}
int lcd(int a,int b,int n)
{
    /*we know that,
                a x b = gcd x lcd;
    */
    return (a*b)/n;
}
int main()
{
    cout<<"Enter a,b :";
    int a,b;
    cin>>a>>b;
    int n=0;
    if(a>b) n=gcd(a,b);
    else n=gcd(b,a);
    int l = lcd(a,b,n);
    cout<<"GCD : "<<n<<"\nLCD : "<<l;
    return 0;
}
