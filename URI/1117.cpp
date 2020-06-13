#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0,x;
    int flag = 0;
    while(flag<2)
    {
        cin>>x;
        if(x>=0 && x<=10)
        {
            sum+=x;
            flag++;
        }
        else cout<<"nota invalida"<<endl;
    }
    printf("media = %.2f\n",sum/2);
    return 0;
}
