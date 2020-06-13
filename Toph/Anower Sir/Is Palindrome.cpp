#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char ch[103];
int i,j,size;
int main()
{
    scanf("%s",ch);
    size=j=strlen(ch);
    for(i=0;i<size;i++)
    {
        j--;
        if(ch[i]!=ch[j])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
