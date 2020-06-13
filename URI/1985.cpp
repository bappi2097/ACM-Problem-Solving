#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double calculate(int,double);
int main()
{
    int id,t,quantity;
    double price=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>id>>quantity;
        price+=calculate(id,quantity);
    }
    printf("%.2f\n",price);
    return 0;
}
double calculate(int id,double quantity)
{
    switch(id)
    {
    case 1001:
        return 1.50*quantity;
    case 1002:
        return 2.50*quantity;
    case 1003:
        return 3.50*quantity;
    case 1004:
        return 4.50*quantity;
    case 1005:
        return 5.50*quantity;
    }
    return 0;
}
