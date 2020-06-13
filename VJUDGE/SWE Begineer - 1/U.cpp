#include<iostream>
#include <cmath>
using namespace std;
double a,b,count=0;
void sqr()
{
    for(a;a<=b;a++)
    {
        if((double)sqrt(a)==(int)sqrt(a))count++;
    }
    cout<<count<<'\n';
}
int main()
{
    while(1)
    {
        cin>>a>>b;
        count=0;
        if(a!=0 && b!=0)sqr();
        else break;
    }
    return 0;
}
