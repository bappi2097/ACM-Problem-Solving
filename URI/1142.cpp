#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    for(int i=1;k<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<"PUM"<<endl;
        k++;
    }
    return 0;
}
