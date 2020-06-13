#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        stk.push(n);
    }
    for(int i=0;i<t;i++)
    {
        cout<<stk.top()<<endl;
        stk.pop();
        if(stk.empty())cout<<"empty"<<endl;
        else cout<<"not empty"<<endl;
    }
    return 0;
}
