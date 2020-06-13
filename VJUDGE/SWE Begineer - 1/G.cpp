#include <iostream>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    long long int divn=n/a,divm=m/a;
    if(n/a!=divn)divn++;
    if(m/a!=divm)divm++;
    cout<<(divn*divm)<<"\n";
    return 0;
}
