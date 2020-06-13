#include<iostream>
using namespace std;
int main()
{
    long long int t,m=0,i;
    cin>>t;
    long long int  mark[t],ar[t],count=0;
    for(i=0;i<t;i++)
    {
        cin>>ar[i];
        mark[i]=0;
    }
    while(1)
    {
        if(m==0 && ar[m]%2==0)
        {
           mark[m]=1;
           if(ar[0]>0)ar[m]--;
           break;
        }
        else if(m==t-1 && ar[m]%2==1)
        {
            mark[m]=1;
            if(ar[m]>0)ar[m]--;
            break;
        }
        else if(ar[m]%2==1)
        {
            mark[m]=1;
            ar[m]--;
            m++;
        }
        else if(ar[m]%2==0)
        {
            mark[m]=1;
            if(ar[m]>1)ar[m]--;
            m--;
        }
    }
    m=0;
    for(i=0;i<t;i++)if(mark[i]==1)count++;
    for(i=0;i<t;i++)m+=ar[i];
    cout<<count<<' '<<m<<'\n';
    return 0;
}
