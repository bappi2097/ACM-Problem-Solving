#include<bits/stdc++.h>
using namespace std;
int Len(char str[150])
{
    int cnt=0,len=strlen(str);
    for(int i=len-1;i>=0 && str[i]!=':';i--)cnt++;
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    char str[150];
    int cntP=0,cntT=0;
    while(gets(str)!=NULL)
    {
        if(str[0]=='+')cntP++;
        else if(str[0]=='-')cntP--;
        else cntT+=cntP*Len(str);
    }
    cout<<cntT<<endl;
    return 0;
}
