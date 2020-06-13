#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=0;i<t;i++)
        {
            char a[100];
            cin>>a;
            int n=strlen(a),count=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]=='4')count++;
            }
            cout<<count<<'\n';
        }
    }
    return 0;
}
