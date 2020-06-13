#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=(n+2)/2;i++)if(n%i==0)cout<<i<<endl;
    cout<<n<<endl;
    return 0;
}
