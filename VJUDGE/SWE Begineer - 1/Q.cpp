#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[110];
    int f=0;
    cin>>c;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='H' || c[i]=='Q' || c[i]=='9')
        {
            f=1;
            break;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
