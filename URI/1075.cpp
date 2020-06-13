#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i+2<=10000;i+=n)cout<<i+2<<endl;
    return 0;
}
