#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,k=1;
    cin>>n;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++,k++)cout<<k<<' ';
        cout<<endl;
    }
    return 0;
}
