#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t;
    char a[1000];
    cin>>t;
    gets(a);
    for(int i=1; i<=t; i++)
    {
        int sum=0;
        gets(a);
        int n=strlen(a);
        for(int j=0; j<n; j++)
        {
            if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==' ')sum+=1;
            else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x')sum+=2;
            else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y')sum+=3;
            else if(a[j]=='s'||a[j]=='z')sum+=4;
        }
        cout<<"Case #"<<i<<": "<<sum<<'\n';
    }
    return 0;
}
