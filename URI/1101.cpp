#include<iostream>
using namespace std;
int main()
{
    int m,n,sum;
    cin>>m>>n;
    while(m>0 && n>0)
    {
        sum=0;
        if(m>n)
        {
            m+=n;
            n=m-n;
            m-=n;
        }
        for(m;m<=n;m++)
        {
            cout<<m<<' ';
            sum+=m;
        }
        cout<<"Sum="<<sum<<endl;
        cin>>m>>n;
    }

    return 0;
}
