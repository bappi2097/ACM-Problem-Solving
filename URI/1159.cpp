#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int sum=0;
        if(n%2==0)for(int i=n;i<=n+8;i+=2)sum+=i;
        else for(int i=n+1;i<=n+9;i+=2)sum+=i;
        cout<<sum<<endl;
        cin>>n;
    }
    return 0;
}
