#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int sum=0;
        cin>>x>>y;
        if(x%2==0)
        {
            x+=1;
            for(int j=1; j<=y; j++)
            {
                sum+=x;
                x+=2;
            }
        }
        else
            for(int j=1; j<=y; j++)
            {
                sum+=x;
                x+=2;
            }
        cout<<sum<<endl;
    }
    return 0;
}
