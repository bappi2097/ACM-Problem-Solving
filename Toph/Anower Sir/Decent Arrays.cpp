#include<iostream>
using namespace std;
int main()
{
    int n,a[102],max=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
