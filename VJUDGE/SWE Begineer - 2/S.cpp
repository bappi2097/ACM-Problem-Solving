#include<iostream>
using namespace std;
int main()
{
    long long int t;
    while(cin>>t)
    {
        long long int a,b,c,i;
        for(i=1;i<=t;i++)
        {
            cin>>a>>b>>c;
            cout<<"Case "<<i<<": ";
            if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
            {
                if(a==b && b==c)cout<<"Equilateral";
                else if(a==b || b==c ||c==a)cout<<"Isosceles";
                else cout<<"Scalene";
            }
            else cout<<"Invalid";
            cout<<'\n';
        }
    }
    return 0;
}
