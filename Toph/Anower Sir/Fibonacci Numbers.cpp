#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int Fibonacci[55];
void fibonacci()
{
    long long int a=0,b=1;
    Fibonacci[1]=1;
    for(int i=2;i<=50;i++)
    {
        Fibonacci[i]=a+b;
        a=b;
        b=Fibonacci[i];
    }
}
int main()
{
    fibonacci();
    int n;
    while(cin>>n)
    {
        cout<<Fibonacci[n]<<endl;
    }
    return 0;
}
