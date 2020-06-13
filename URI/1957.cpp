#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int d,s;
    int i=0;
    cin>>d;
    char h[100];
    while(d>0)
    {
        s=d%16;
        d/=16;
        if(s==10)h[i]='A';
        else if(s==11)h[i]='B';
        else if(s==12)h[i]='C';
        else if(s==13)h[i]='D';
        else if(s==14)h[i]='E';
        else if(s==15)h[i]='F';
        else h[i]=s+'0';
        i++;
    }
    for(i-=1;i>=0;i--)cout<<h[i];
    cout<<'\n';
    return 0;
}
