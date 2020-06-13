#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)cout<<"Bashar"<<endl;
        else if(a<b)cout<<"Hamada"<<endl;
        else cout<<"Iskandar"<<endl;
    }
    return 0;
}
