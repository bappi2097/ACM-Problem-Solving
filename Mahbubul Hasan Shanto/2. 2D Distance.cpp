#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a1,b1,a2,b2,l;
    cin>>a1>>b1>>a2>>b2;
    l=sqrt(pow(a1-a2,2)+pow(b1-b2,2));
    cout<<l<<"\n";
    return 0;
}
