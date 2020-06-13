#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        x+=y;
        y=x-y;
        x-=y;
    }
    for(x+=1;x<y;x++)if(x%5==2 || x%5==3)cout<<x<<endl;
    return 0;
}
