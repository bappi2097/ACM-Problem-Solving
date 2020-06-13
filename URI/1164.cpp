#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int i,j,n,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n;
        for(j=1;j<=n/2;j++)if(n%j==0)sum+=j;
        if(sum==n)cout<<n<<" eh perfeito"<<endl;
        else cout<<n<<" nao eh perfeito"<<endl;
    }
    return 0;
}
