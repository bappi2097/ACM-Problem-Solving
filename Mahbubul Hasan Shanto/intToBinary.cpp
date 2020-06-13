#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a="";
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)a+="0";
        else a+="1";
        n/=2;
    }
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    return 0;
}
