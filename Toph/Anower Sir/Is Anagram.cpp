#include<iostream>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    char a[105],b[105];
    cin>>a>>b;
    if(strlen(a)!=strlen(b))
    {
        cout<<"No"<<endl;
        return 0;
    }
    int size=strlen(a),mark=0;
    for(int i=0;i<size;i++)
    {
        mark=0;
        for(int j=0;j<size;j++)
        {
            if(a[i]==b[j])mark=1;
        }
        if(mark!=1)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
