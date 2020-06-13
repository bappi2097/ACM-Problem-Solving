#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int pa,pb;
        double g1,g2;
        int count=0;
        cin>>pa>>pb>>g1>>g2;
        while(pa<=pb && count<=100)
        {
            pa+=pa*(g1/100);
            pb+=pb*(g2/100);
            count++;
        }
        if(count>100)cout<<"Mais de 1 seculo."<<endl;
        else cout<<count<<" anos."<<endl;
    }
    return 0;
}
