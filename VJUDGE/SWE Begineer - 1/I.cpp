#include <iostream>
using namespace std;
int main()
{
    int i,n,low,up,sum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=0;
        cin>>low>>up;
        for(low;low<=up;low++)if(low%2==1)sum+=low;
        cout<<"Case "<<i+1<<": "<<sum<<"\n";
    }
    return 0;
}
