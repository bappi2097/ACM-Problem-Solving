#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int count=n/k,a=n%k,b=n/k;
        int c=a+b;
        while(c>=k)
        {
            count+=c/k;
            b=c/k;
            a=c%k;
            c=a+b;
        }
        cout<<count+n<<'\n';
    }
    return 0;
}
