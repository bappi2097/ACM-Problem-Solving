#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<char> ch;
void backtrack(int n,int b)
{
    if(n==b)
    {
        for(int i=0; i<ch.size(); i++)cout<<ch[i];
        cout<<endl;
    }
    else if(b>n)
    {
        return;
    }
    else
    {
        ch.push_back('A');
        backtrack(n,2*b+1);
        ch.pop_back();
        ch.push_back('B');
        backtrack(n,2*b+2);
        ch.pop_back();
    }
    return;
}
int main()
{
    ll n;
    cin>>n;
    backtrack(n,0);
    return 0;
}
