#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hr,mn,time;
    while(scanf("%d : %d",&hr,&mn)!=EOF)
    {
        if(hr<7)cout<<"Atraso maximo: 0\n";
        else if(hr==7 && mn==0)cout<<"Atraso maximo: 0\n";
        else
        {
            time=((hr-7)*60)+mn;
            cout<<"Atraso maximo: "<<time<<'\n';
        }
    }
    return 0;
}
