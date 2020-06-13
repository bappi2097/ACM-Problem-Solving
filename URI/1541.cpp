#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    double c;
    while(1)
    {
        cin>>a;
        if(a==0)return 0;
        cin>>b;
        if(b==0)return 0;
        cin>>c;
        if(c==0)return 0;
        cout<<(int)sqrt(a*b*(100/c))<<endl;
    }
    return 0;
}
