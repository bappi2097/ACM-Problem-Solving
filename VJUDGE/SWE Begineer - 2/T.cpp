#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int a,b,c,sum,n=0;
            cin>>a>>b>>c;
            sum=a+b;
            while(sum>=c)
            {
                n+=sum/c;
                sum=sum/c+sum%c;
            }
            cout<<n<<'\n';
        }
    }
    return 0;
}
