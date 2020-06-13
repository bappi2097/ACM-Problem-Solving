#include<iostream>
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>=10 && x<=20)count++;
    }
    cout<<count<<" in"<<endl;
    cout<<n-count<<" out"<<endl;
    return 0;
}
