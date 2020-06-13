#include<iostream>
using namespace std;
int main()
{
    double i=0;
    while(i<=2)
    {
        cout<<"I="<<i<<" J="<<i+1.0<<endl;
        cout<<"I="<<i<<" J="<<i+2.0<<endl;
        cout<<"I="<<i<<" J="<<i+3.0<<endl;
        i+=.2;
    }
    return 0;
}
