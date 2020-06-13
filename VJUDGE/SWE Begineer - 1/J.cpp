#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    long long int a,b;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)cout<<">\n";
        else if(a<b)cout<<"<\n";
        else cout<<"=\n";
    }
    return 0;
}
