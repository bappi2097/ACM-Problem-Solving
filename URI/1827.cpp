#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n][n];
        for(int i=0; i<n; i++)for(int j=0; j<n; j++)a[i][j]=0;
        for(int i=0; i<n; i++)a[i][i]=2;
        for(int i=n-1,j=0; i>=0; i--,j++)a[i][j]=3;
        for(int i=n/3; i<n-(n/3); i++)for(int j=n/3; j<n-(n/3); j++)a[i][j]=1;
        a[n/2][n/2]=4;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
