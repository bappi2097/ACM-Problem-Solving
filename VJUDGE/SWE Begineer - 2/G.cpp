#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a[3],pot;
        cin>>a[0]>>a[1]>>a[2];
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2-j;k++)
            {
                if(a[k]>a[k+1])
                {
                    pot=a[k];
                    a[k]=a[k+1];
                    a[k+1]=pot;
                }
            }
        }
        cout<<"Case "<<i<<": "<<a[1]<<'\n';
    }
    return 0;
}
