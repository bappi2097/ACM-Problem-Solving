#include<iostream>
using namespace std;
int main()
{
    long long int ar[100000],n,i=-1,f=1;
    while(cin>>n)
    {

        if(n!=42 && f)
        {
            i++;
            ar[i]=n;
        }
        else f=0;

    }
    for(int j=0;j<=i;j++)cout<<ar[j]<<'\n';
    return 0;
}
