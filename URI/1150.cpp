#include<iostream>
using namespace std;
int main()
{
    int x,z,count=1,sum;
    cin>>x>>z;
    sum=x;
    while(x>=z)cin>>z;
    for(int i = 1;sum<=z;i++)
    {
        count++;
        sum+=x+i;
    }
    cout<<count<<endl;
    return 0;
}
