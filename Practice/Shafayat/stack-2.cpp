#include<bits/stdc++.h>
using namespace std;
vector<int>stk;
vector<int>::iterator it1,it2,it3;
int maxSize=0;
int top=INT_MIN;
void push(int no)
{
    stk.push_back(no);
    top=no;
    maxSize++;
    return;
}
int peek()
{
    return top;
}
int pop()
{
    if(!stk.size())return INT_MIN;
    maxSize--;
    int poped_top=top;
    stk.pop_back();
    if(maxSize)top=stk[maxSize-1];
    else top=INT_MIN;
    return poped_top;
}
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
        push(n);
    }
    for(int i=0;i<=t;i++)
    {
        if(maxSize)cout<<"Peek: "<<peek()<<endl;
        else cout<<"Empty Stack"<<endl;
        if(maxSize)cout<<"Pop: "<<pop()<<endl;
        else cout<<"Empty Stack"<<endl;
    }
    return 0;
}
