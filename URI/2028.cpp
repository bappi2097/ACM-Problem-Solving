#include<iostream>
using namespace std;
int main()
{
    int a,count,c=1;;
    while(cin>>a)
    {
        count=1;
        if(a==0)
        {
            cout<<"Caso "<<c<<": 1 numero\n0\n\n";
            c++;
        }
        else
        {
            for(int i=1; i<=a; i++)for(int j=1; j<=i; j++)count++;
            cout<<"Caso "<<c<<": "<<count<<" numeros\n0 ";
            for(int i=1; i<=a; i++)
                for(int j=1; j<=i; j++)
                {
                    cout<<i;
                    if(j!=a)cout<<' ';
                }
            cout<<"\n\n";
            c++;
        }
    }
    return 0;
}
