#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int a=n/5;
    if((double)(n/5)!=(int)(n/5))a+=1;
    cout<<a<<'\n';
    return 0;
}
