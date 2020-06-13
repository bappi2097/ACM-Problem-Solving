#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10];
    int count=0;
    for(int i=0;i<3;i++)
    {
        count=0;
        getline(cin,ch);
        while(!strcmp(ch,"caw caw")==0)
        {
            if(strcmp(ch,"--*")==0)count+=1;
            else if(strcmp(ch,"-*-")==0)count+=2;
            else if(strcmp(ch,"*--")==0)count+=4;
            getline(cin,ch);
        }
        for(int i=0;i<10;i++)ch[i]='\0';
        cout<<count<<endl;
    }
    return 0;
}
