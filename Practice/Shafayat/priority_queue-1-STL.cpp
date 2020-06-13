#include<bits/stdc++.h>
using namespace std;
void showPriorityQueue(priority_queue<int> pq)
{
    if(pq.empty())
    {
        cout<<"Empty Queue"<<endl;
        return;
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    if(pq.empty())cout<<"Empty Queue"<<endl;
    else cout<<"Not Empty"<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    priority_queue<int> pq;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pq.push(n);
    }
    showPriorityQueue(pq);
    return 0;
}
