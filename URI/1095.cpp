#include<iostream>
using namespace std;
int main()
{
    int a=60;
    for(int i=1;a>=0;i+=3)
    {
        cout<<"I="<<i<<" J="<<a<<endl;
        a-=5;
    }
    return 0;
}
