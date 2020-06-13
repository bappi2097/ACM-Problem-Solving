#include<iostream>
using namespace std;
int main()
{
    int max,n,pos=1;
    cin>>n;max=n;
    for(int i=2;i<=100;i++)
    {
        cin>>n;
        if(n>max)
        {
            max=n;
            pos=i;
        }

    }
    cout<<max<<endl<<pos<<endl;
    return 0;
}
