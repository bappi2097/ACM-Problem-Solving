#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            int t,countHigh=0,countLow=0;
            cin>>t;
            int ar[t];
            for(int j=0;j<t;j++)cin>>ar[j];
            for(int j=0;j<t-1;j++)
            {
                if(ar[j]<ar[j+1])countHigh++;
                else if(ar[j]>ar[j+1])countLow++;
            }
            cout<<"Case "<<i<<": "<<countHigh<<" "<<countLow<<'\n';
        }
    }
    return 0;
}
