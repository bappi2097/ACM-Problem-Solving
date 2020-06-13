#include<iostream>
#include<cstring>
using namespace std;
char ch[26][26];
int main()
{
    int r,c,count=0;
    cin>>r>>c;
    for(int i=0;i<r;i++)cin>>ch[i];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(ch[i][j]!='*' && ch[i+1][j]!='*' && ch[i-1][j]!='*' && ch[i][j+1]!='*' && ch[i][j-1]!='*')count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
