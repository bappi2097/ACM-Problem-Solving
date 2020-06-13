#include<iostream>
using namespace std;
int main()
{
    long long int a,b,n,q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n>>a>>b;
        if(n%2==1)b=a+(n/2)*b;
        else b*=(n/2);
        if(a*n<b)cout<<a*n<<endl;
        else cout<<b<<endl;

    }
    return 0;
}
