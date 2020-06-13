#include<iostream>
using namespace std;
void space(int a)
{
    for(int i=0;i<a;i++)cout<<" ";
}
int countSpace(int a)
{
    int b=0;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        int a[n][n];
        for(int i=0,k=1;i<n;i++,k*=2)for(int j=0, l=k;j<n;j++,l*=2)a[i][j]=l;
        int fnl=countSpace(a[n-1][n-1]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                {
                    space(fnl-countSpace(a[i][j]));
                    cout<<a[i][j];
                }
                else
                {
                    space(fnl+1-countSpace(a[i][j]));
                    cout<<a[i][j];
                }

            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
