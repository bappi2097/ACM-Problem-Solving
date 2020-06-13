#include<iostream>
using namespace std;
int main()
{
    int a,b,r,q,f;
    cin>>a>>b;
    if(a<0)
    {
        int e=b;
        if(b<0)e=b*-1;
        for(r=0;r<e;r++)
        {
            f=a-r;
            if(f%b==0)break;
        }
        q=f/b;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    cout<<q<<" "<<r<<endl;
    return 0;
}
