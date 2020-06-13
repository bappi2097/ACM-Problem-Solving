#include<bits/stdc++.h>
using namespace std;

int a1,a2,a3;

int main()
{
    while(scanf("%d %d %d",&a1,&a2,&a3) && (a1!=0 || a2!=0 || a3!=0))
    {
        if(a3-a2==a2-a1)
        {
            cout<<"AP"<<" "<<a3+(a2-a1)<<endl;
        }
        else
        {
            cout<<"GP"<<" "<<a3*(a2/a1)<<endl;
        }
    }
    return 0;
}
