#include<bits/stdc++.h>
using namespace std;
#define null NULL
void showQ(queue<int> qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<' ';
        qu.pop();
    }
    cout<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    queue<int> qu;
    int t,n;
    cin>>t;
    qu.pop();
    while(t--)
    {
        cin>>n;
        qu.push(n);
    }
    cout<<"Front : "<<qu.front()<<endl;;
    cout<<"Back : "<<qu.back()<<endl;;
    showQ(qu);
    cout<<(qu.empty()? "empty queue" : "Not empty")<<endl;
    return 0;
}
