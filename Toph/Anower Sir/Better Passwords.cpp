#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[17],c[17],count=0;
    cin>>ch;
    for(int i=0;i<strlen(ch);i++)
    {
        if(i==0 && ch[i]>='a' && ch[i]<='z')c[i]=ch[i]-32;
        else if(ch[i]=='o')
        {
            c[i+count]='(';
            c[i+count+1]=')';
            count++;
        }
        else if(ch[i]=='s')c[i+count]='$';
        else if(ch[i]=='i')c[i+count]='!';
        else c[i+count]=ch[i];
    }
    for(int i=0;i<strlen(ch)+count;i++)cout<<c[i];
    cout<<endl;
    return 0;
}
