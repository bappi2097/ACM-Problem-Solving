#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if(sqrt(n)>=(double)((int)sqrt(n)+0.5))cout<<(int)sqrt(n)+1<<'\n';
    else cout<<(int)sqrt(n)<<'\n';
    return 0;
}
