#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int count=0,r3[8],c3[8],r,c,k;
        cin>>r>>c>>k;
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                if((((i-r)*(i-r))+((j-c)*(j-c)))<=2 )count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
