#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    int arp[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {
        if( n%arp[i]==0)
        {
            f=0;
            cout<<"YES\n";
            break;
        }
    }
    if(f)cout<<"NO\n";
    return 0;
}
