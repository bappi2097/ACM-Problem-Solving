#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ar [n][n],k=0;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)ar[i][j]=3;
        for(int i=0;i<n;i++)ar[i][i]=1;
        for(int i=n-1;i>=0;i--)
        {
            ar[i][k]=2;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)cout<<ar[i][j];
            cout<<endl;
        }

    }
    return 0;
}
