#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,sc;
        cin>>n;
        cin>>sc;
        int max=sc,min=sc;
        for(int j=1;j<n;j++)
        {
            cin>>sc;
            if(sc>max)max=sc;
            else if(sc<min)min=sc;
        }
        cout<<(max-min)*2<<'\n';
    }
    return 0;
}
