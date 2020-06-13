#include<iostream>
using namespace std;
int p[32],n,q[32],c,Pascal[32];
int main()
{
    cin>>n;
    p[0]=1;
    q[0]=1;
    for(int i=1; i<=n; i++)
    {
        c=0;
        if(i%2==1)
        {
            c=0;
            for(int j=1; j<=(i/2); j++)
            {
                q[j]=p[j-1]+p[j];
                c++;
            }
            for(int j=c; j<i; j++)
            {
                q[j]=q[c];
                c--;
            }
        }
        else
        {
            c=0;
            for(int j=1; j<=(i/2); j++)
            {
                q[j]=p[j-1]+p[j];
                c++;
            }
            for(int j=c-1; j<i; j++)
            {
                q[j]=q[c];
                c--;
            }
        }
        for(int j=0; j<32; j++)p[j]=q[j];
        for(int j=0; j<i; j++)Pascal[i-1]+=p[j];
    }
    for(int j=0; j<n; j++)cout<<Pascal[j]<<endl;
    return 0;
}
