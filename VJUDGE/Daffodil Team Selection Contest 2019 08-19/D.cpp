#include<bits/stdc++.h>
using namespace std;
void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    inOut();
    string s,r;

    cin>> s >> r;
    int len = r.size();

    int a=0,ct=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==r[a])a++;
        if(a==len)break;
    }
    if(len == a)
       cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //if()
}
