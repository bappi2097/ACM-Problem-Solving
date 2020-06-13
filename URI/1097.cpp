#include<iostream>
using namespace std;
int main()
{
    int a=7;
    for(int i=1; i<=9; i+=2)
    {
        cout<<"I="<<i<<" J="<<a<<endl;
        cout<<"I="<<i<<" J="<<a-1<<endl;
        cout<<"I="<<i<<" J="<<a-2<<endl;
        a+=2;
    }
    return 0;
}
