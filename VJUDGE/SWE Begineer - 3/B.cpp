#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        cout<<x<<' '<<y<<' ';
        int max=0,temp;
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        for(int j=x; j<=y; j++)
        {
            int i=j,count=1;
            while(i!=1)
            {
                if(i%2!=0)i=(3*i)+1;
                else i/=2;
                count++;
            }
            if(count>max)max=count;
        }
        cout<<max<<'\n';
    }
    return 0;
}
