#include <iostream>
using namespace std;
int main()
{
    int T;
    char c[10000];
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int n,a=0,b=0,w=0,t=0;
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            cin>>c[j];
            switch(c[j])
            {
            case 'B':
                b++;
                break;
            case 'A':
                a++;
                break;
            case 'W':
                w++;
                break;
            case 'T':
                t++;
                break;
            default :
                break;
            }
        }
        cout << "Case " << i << ": ";
        if(a==n)cout<< "ABANDONED";
        else if(b==w)cout << "DRAW " << b << ' ' << t;
        else if(w+a==n)cout<<"WHITEWASH";
        else if(b+a==n)cout<< "BANGLAWASH";
        else
        {
            if(b>w)cout<<"BANGLADESH " << b << " - " << w;
            else cout<<"WWW " << w << " - " << b;
        }
        cout<<"\n";
    }
    return 0;
}
