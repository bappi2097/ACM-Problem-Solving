#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x>y)cout<<"Decrescente"<<endl;
        else if(x<y)cout<<"Crescente"<<endl;
        else return 0;
    }
    return 0;
}
